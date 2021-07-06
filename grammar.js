const
  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,
  letter = choice(unicodeLetter, '_'),

  newline = '\n',
  terminator = choice(newline, ';'),

  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  binaryDigit = /[01]/,

  hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
  octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit))),
  decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit))),
  binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit))),

  hexLiteral = seq('0', choice('x', 'X'), optional('_'), hexDigits),
  octalLiteral = seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
  decimalLiteral = choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
  binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),

  intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral)

module.exports = grammar({
  name: 'hlb',

  extras: $ => [
    $.comment,
    /\s/
  ],

  inline: $ => [
    $._type,
    $._type_identifier,
    $._declaration,
    $._string_literal,
    $._with_clause,
    $._as_clause,
  ],

  word: $ => $.identifier,

  supertypes: $ => [
    $._expression,
    $._type,
    $._statement,
  ],

  rules: {
    source_file: $ => repeat(seq(
      $._declaration,
      optional(terminator)
    )),

    _declaration: $ => choice(
      $.import_declaration,
      $.export_declaration,
      $.function_declaration
    ),

    import_declaration: $ => seq(
      'import',
      $.identifier,
      'from',
      $._expression
    ),

    export_declaration: $ => seq(
      'export',
      $.identifier
    ),

    function_declaration: $ => seq(
      'fn',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('result', choice($.parameter_list, $._type)),
      field('body', optional($.block))
    ),

    parameter_list: $ => seq(
      '(',
      optional(seq(
        commaSep($.parameter_declaration),
        optional(',')
      )),
      ')'
    ),

    parameter_declaration: $ => seq(
      field('type', $._type),
      field('name', $.identifier)
    ),

    block: $ => seq(
      '{',
      optional($._statement_list),
      '}'
    ),

    _statement_list: $ => seq(
      $._statement,
      repeat(seq(terminator, $._statement)),
      optional(terminator)
    ),

    _statement: $ => choice(
      $._expression,
    ),

    _expression: $ => choice(
      $.selector_expression,
      $.call_expression,
      $.parenthesized_expression,
      $.identifier,
      $.block_literal,
      $._string_literal,
      $.int_literal,
      $.true,
      $.false
    ),

    selector_expression: $ => prec(2, seq(
      field('operand', $._expression),
      '.',
      field('field', $.identifier)
    )),

    call_expression: $ => prec.left(2, seq(
      field('function', $._expression),
      field('arguments', $.argument_list),
      field('with', optional($._with_clause)),
      field('as', optional($._as_clause))
    )),

    argument_list: $ => seq(
      '(',
      optional(seq(
        commaSep($._expression),
        optional(',')
      )),
      ')'
    ),

    _with_clause: $ => seq(
      'with',
      $._expression
    ),

    _as_clause: $ => seq(
      'as',
      choice(
        $.identifier,
        $.bind_list
      )
    ),

    bind_list: $ => seq(
      '(',
      optional(seq(
        commaSep($.bind_declaration),
        optional(',')
      )),
      ')'
    ),

    bind_declaration: $ => seq(
      field('source', $.identifier),
      '->',
      field('target', $.identifier)
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    identifier: $ => token(seq(
      letter,
      repeat(choice(letter, unicodeDigit))
    )),

    _type: $ => choice(
      $._type_identifier,
      $.option_type
    ),

    _type_identifier: $ => alias($.identifier, $.type_identifier),

    option_type: $ => seq(
      'option',
      field('subtype', optional(seq(
        '<',
        $.identifier,
        '>'
      )))
    ),

    block_literal: $ => seq(
      $._type,
      $.block,
    ),

    _string_literal: $ => choice(
      $.raw_string_literal,
      $.interpreted_string_literal
    ),

    raw_string_literal: $ => token(seq(
      '`',
      repeat(/[^`]/),
      '`'
    )),

    interpreted_string_literal: $ => seq(
      '"',
      repeat($._string_fragment),
      '"'
    ),

    _string_fragment: $ => choice(
      $.escaped_fragment,
      $.interpolated_fragment,
      $.char_fragment,
    ),

    escaped_fragment: $ => token(/\\./),

    interpolated_fragment: $ => seq(
      '${',
      $._expression,
      '}'
    ),

    char_fragment: $ => token(/\$|[^"$\\]+/),

    int_literal: $ => token(intLiteral),

    true: $ => 'true',
    false: $ => 'false',

    comment: $ => token(seq('#', /.*/)),
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
