; Function calls

(call_expression
  function: (identifier) @function)

(call_expression
  function: (selector_expression
    field: (identifier) @function.method))

; Function definitions

(function_declaration
   name: (identifier) @function)

; Identifiers

(type_identifier) @type
(identifier) @variable

; Keywords

[
  "import"
  "export"
  "with"
  "as"
] @keyword

; Literals

[
  (raw_string_literal)
  (interpreted_string_literal)
] @string

(escaped_fragment) @escape

(int_literal) @number

[
  (true)
  (false)
] @constant.builtin

(comment) @comment
