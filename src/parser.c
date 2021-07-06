#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_import = 4,
  anon_sym_from = 5,
  anon_sym_export = 6,
  anon_sym_fn = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_DOT = 13,
  anon_sym_with = 14,
  anon_sym_as = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_option = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  sym_raw_string_literal = 20,
  anon_sym_DQUOTE = 21,
  sym_escaped_fragment = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  sym_char_fragment = 24,
  sym_int_literal = 25,
  sym_true = 26,
  sym_false = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym_import_declaration = 30,
  sym_export_declaration = 31,
  sym_function_declaration = 32,
  sym_parameter_list = 33,
  sym_parameter_declaration = 34,
  sym_block = 35,
  sym__statement_list = 36,
  sym__statement = 37,
  sym__expression = 38,
  sym_selector_expression = 39,
  sym_call_expression = 40,
  sym_argument_list = 41,
  sym_bind_list = 42,
  sym_bind_declaration = 43,
  sym_parenthesized_expression = 44,
  sym_option_type = 45,
  sym_block_literal = 46,
  sym_interpreted_string_literal = 47,
  sym__string_fragment = 48,
  sym_interpolated_fragment = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_parameter_list_repeat1 = 51,
  aux_sym__statement_list_repeat1 = 52,
  aux_sym_argument_list_repeat1 = 53,
  aux_sym_bind_list_repeat1 = 54,
  aux_sym_interpreted_string_literal_repeat1 = 55,
  alias_sym_type_identifier = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_export] = "export",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_with] = "with",
  [anon_sym_as] = "as",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_option] = "option",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [sym_escaped_fragment] = "escaped_fragment",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_char_fragment] = "char_fragment",
  [sym_int_literal] = "int_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_import_declaration] = "import_declaration",
  [sym_export_declaration] = "export_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_bind_list] = "bind_list",
  [sym_bind_declaration] = "bind_declaration",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_option_type] = "option_type",
  [sym_block_literal] = "block_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__string_fragment] = "_string_fragment",
  [sym_interpolated_fragment] = "interpolated_fragment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_bind_list_repeat1] = "bind_list_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escaped_fragment] = sym_escaped_fragment,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_char_fragment] = sym_char_fragment,
  [sym_int_literal] = sym_int_literal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_import_declaration] = sym_import_declaration,
  [sym_export_declaration] = sym_export_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_bind_list] = sym_bind_list,
  [sym_bind_declaration] = sym_bind_declaration,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_option_type] = sym_option_type,
  [sym_block_literal] = sym_block_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__string_fragment] = sym__string_fragment,
  [sym_interpolated_fragment] = sym_interpolated_fragment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_bind_list_repeat1] = aux_sym_bind_list_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escaped_fragment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_char_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_export_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_option_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolated_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bind_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arguments = 1,
  field_as = 2,
  field_body = 3,
  field_field = 4,
  field_function = 5,
  field_name = 6,
  field_operand = 7,
  field_parameters = 8,
  field_result = 9,
  field_source = 10,
  field_subtype = 11,
  field_target = 12,
  field_type = 13,
  field_with = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_as] = "as",
  [field_body] = "body",
  [field_field] = "field",
  [field_function] = "function",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_parameters] = "parameters",
  [field_result] = "result",
  [field_source] = "source",
  [field_subtype] = "subtype",
  [field_target] = "target",
  [field_type] = "type",
  [field_with] = "with",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 0, .length = 3},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 4},
  [8] = {.index = 7, .length = 4},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 4},
  [12] = {.index = 20, .length = 4},
  [13] = {.index = 24, .length = 6},
  [14] = {.index = 30, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_parameters, 2},
    {field_result, 3},
  [3] =
    {field_arguments, 1},
    {field_function, 0},
  [5] =
    {field_name, 1},
    {field_type, 0},
  [7] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_result, 3},
  [11] =
    {field_field, 2},
    {field_operand, 0},
  [13] =
    {field_subtype, 1},
    {field_subtype, 2},
    {field_subtype, 3},
  [16] =
    {field_arguments, 1},
    {field_function, 0},
    {field_with, 2},
    {field_with, 3},
  [20] =
    {field_arguments, 1},
    {field_as, 2},
    {field_as, 3},
    {field_function, 0},
  [24] =
    {field_arguments, 1},
    {field_as, 4},
    {field_as, 5},
    {field_function, 0},
    {field_with, 2},
    {field_with, 3},
  [30] =
    {field_source, 0},
    {field_target, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [3] = alias_sym_type_identifier,
  },
  [3] = {
    [0] = alias_sym_type_identifier,
  },
  [5] = {
    [0] = alias_sym_type_identifier,
  },
  [7] = {
    [3] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(13);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(25);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(28);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '<') ADVANCE(26);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(25);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_escaped_fragment);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(41);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(6);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'w') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escaped_fragment] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(210),
    [sym_import_declaration] = STATE(91),
    [sym_export_declaration] = STATE(91),
    [sym_function_declaration] = STATE(91),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym__expression,
    STATE(136), 1,
      sym__statement,
    STATE(190), 1,
      sym_option_type,
    STATE(213), 1,
      sym__statement_list,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [46] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym__expression,
    STATE(136), 1,
      sym__statement,
    STATE(190), 1,
      sym_option_type,
    STATE(203), 1,
      sym__statement_list,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [92] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym__expression,
    STATE(136), 1,
      sym__statement,
    STATE(190), 1,
      sym_option_type,
    STATE(199), 1,
      sym__statement_list,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [138] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [181] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym__expression,
    STATE(172), 1,
      sym__statement,
    STATE(190), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [224] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [267] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym__expression,
    STATE(172), 1,
      sym__statement,
    STATE(190), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [310] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [353] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym__expression,
    STATE(172), 1,
      sym__statement,
    STATE(190), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [393] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [433] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [473] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [513] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [553] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [593] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [633] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym__expression,
    STATE(191), 1,
      sym_option_type,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(77), 2,
      sym_true,
      sym_false,
    STATE(41), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [670] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [707] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym__expression,
    STATE(190), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [744] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [781] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [818] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym__expression,
    STATE(191), 1,
      sym_option_type,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(77), 2,
      sym_true,
      sym_false,
    STATE(41), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [855] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [892] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym__expression,
    STATE(191), 1,
      sym_option_type,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(77), 2,
      sym_true,
      sym_false,
    STATE(41), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [929] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [966] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym__expression,
    STATE(190), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(106), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [1003] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [1040] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym__expression,
    STATE(182), 1,
      sym_option_type,
    ACTIONS(39), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(43), 2,
      sym_true,
      sym_false,
    STATE(109), 5,
      sym_selector_expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [1077] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_comment,
    STATE(48), 1,
      sym_block,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1100] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_with,
    ACTIONS(93), 1,
      anon_sym_as,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [1122] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(97), 8,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1140] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(101), 8,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1158] = 4,
    ACTIONS(85), 1,
      sym_comment,
    STATE(34), 1,
      sym_argument_list,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(105), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1178] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_with,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1198] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_as,
    STATE(34), 1,
      sym_argument_list,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(105), 6,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [1220] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(113), 8,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1238] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(117), 8,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1256] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(121), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1273] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(125), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1290] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(129), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1307] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1324] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(133), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1341] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(137), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1358] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(141), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1375] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(145), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1392] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(149), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1409] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(153), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1426] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(157), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1443] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(161), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1460] = 6,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_argument_list,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(165), 4,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [1483] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1500] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(177), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1517] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(181), 7,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_as,
  [1534] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(185), 5,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LBRACE,
  [1552] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_comment,
    STATE(126), 1,
      sym_block,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(191), 4,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [1572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(79), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1590] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_comment,
    STATE(128), 1,
      sym_block,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(197), 4,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [1610] = 5,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_block,
    ACTIONS(81), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1630] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
    STATE(91), 3,
      sym_import_declaration,
      sym_export_declaration,
      sym_function_declaration,
  [1654] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_import,
    ACTIONS(208), 1,
      anon_sym_export,
    ACTIONS(211), 1,
      anon_sym_fn,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
    STATE(91), 3,
      sym_import_declaration,
      sym_export_declaration,
      sym_function_declaration,
  [1678] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(216), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(84), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1697] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(64), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1716] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1731] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(78), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1750] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1765] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(228), 1,
      anon_sym_with,
    ACTIONS(230), 1,
      anon_sym_as,
    ACTIONS(89), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1784] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(78), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1829] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(236), 5,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LBRACE,
  [1844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_as,
    STATE(88), 1,
      sym_argument_list,
    ACTIONS(103), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1874] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(67), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1893] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(246), 5,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LBRACE,
  [1908] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(250), 5,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LBRACE,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1936] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(254), 5,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LBRACE,
  [1951] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(258), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(78), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_with,
    ACTIONS(266), 1,
      anon_sym_as,
    ACTIONS(87), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1987] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 5,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_LBRACE,
  [2002] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(117), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [2017] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [2032] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(272), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_argument_list,
    ACTIONS(105), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2051] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(78), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [2070] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_argument_list,
    ACTIONS(105), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2087] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(276), 1,
      anon_sym_with,
    ACTIONS(89), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_argument_list,
    ACTIONS(103), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_with,
    ACTIONS(87), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2134] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2160] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    ACTIONS(286), 3,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [2178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(79), 1,
      sym_argument_list,
    STATE(179), 1,
      aux_sym_argument_list_repeat1,
  [2200] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2214] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2228] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_argument_list,
    STATE(157), 1,
      aux_sym_argument_list_repeat1,
  [2250] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2264] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2278] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(121), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2292] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(129), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2306] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_parameter_declaration,
    STATE(201), 1,
      sym_option_type,
  [2342] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2356] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2370] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2384] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(161), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2398] = 3,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(81), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2412] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2486] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_argument_list,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
  [2508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2520] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_parameter_declaration,
    STATE(201), 1,
      sym_option_type,
  [2542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2602] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2616] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(316), 4,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [2630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2642] = 6,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_DOT,
    STATE(66), 1,
      sym_argument_list,
    ACTIONS(320), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2674] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(328), 4,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [2688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2700] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(332), 4,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [2714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_parameter_declaration,
    STATE(201), 1,
      sym_option_type,
  [2733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_option,
    STATE(55), 2,
      sym_parameter_list,
      sym_option_type,
  [2750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_parameter_declaration,
    STATE(201), 1,
      sym_option_type,
  [2786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_parameter_declaration,
    STATE(201), 1,
      sym_option_type,
  [2805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_parameter_declaration,
    STATE(201), 1,
      sym_option_type,
  [2824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_argument_list,
  [2840] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym__statement_list_repeat1,
  [2856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
  [2866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_argument_list,
  [2882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_bind_declaration,
  [2898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_bind_declaration,
  [2914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_argument_list,
  [2930] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      aux_sym__statement_list_repeat1,
  [2946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_argument_list,
  [2962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_option,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(184), 1,
      sym_parameter_declaration,
    STATE(201), 1,
      sym_option_type,
  [2978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_bind_declaration,
  [2994] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(386), 4,
      anon_sym_DQUOTE,
      sym_escaped_fragment,
      anon_sym_DOLLAR_LBRACE,
      sym_char_fragment,
  [3004] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      aux_sym__statement_list_repeat1,
  [3020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_bind_declaration,
  [3033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_bind_list,
  [3046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_bind_declaration,
  [3059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_bind_list_repeat1,
  [3072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_bind_declaration,
  [3085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_bind_list_repeat1,
  [3098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_bind_list_repeat1,
  [3111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_bind_declaration,
  [3124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_bind_list,
  [3137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_argument_list_repeat1,
  [3150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_bind_list_repeat1,
  [3163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 2,
      sym_identifier,
      anon_sym_option,
  [3174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 2,
      sym_identifier,
      anon_sym_option,
  [3185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(121), 1,
      sym_bind_list,
  [3198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_bind_list_repeat1,
  [3211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_parameter_list_repeat1,
  [3224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_bind_declaration,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_bind_list,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_bind_list_repeat1,
  [3263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_parameter_list_repeat1,
  [3276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_bind_declaration,
  [3289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_parameter_list_repeat1,
  [3302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_argument_list_repeat1,
  [3315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_bind_list_repeat1,
  [3328] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(378), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 2,
      sym_identifier,
      anon_sym_option,
  [3350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(119), 1,
      sym_bind_list,
  [3363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_argument_list_repeat1,
  [3376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_parameter_list_repeat1,
  [3389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(53), 1,
      sym_bind_list,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 2,
      sym_identifier,
      anon_sym_option,
  [3413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_argument_list_repeat1,
  [3426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_parameter_list_repeat1,
  [3439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LT,
    ACTIONS(183), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_block,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [3484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(187), 1,
      sym_bind_declaration,
  [3494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_block,
  [3528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_parameter_list,
  [3548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_from,
  [3555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_DASH_GT,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [3569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [3576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
  [3583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_GT,
  [3590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
  [3597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
  [3604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
  [3611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_identifier,
  [3618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
  [3632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
  [3639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_identifier,
  [3646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
  [3653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
  [3660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_identifier,
  [3667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
  [3674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [3681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [3688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
  [3695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_GT,
  [3702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
  [3709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_identifier,
  [3716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
  [3723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_identifier,
  [3730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 181,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 310,
  [SMALL_STATE(10)] = 353,
  [SMALL_STATE(11)] = 393,
  [SMALL_STATE(12)] = 433,
  [SMALL_STATE(13)] = 473,
  [SMALL_STATE(14)] = 513,
  [SMALL_STATE(15)] = 553,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 633,
  [SMALL_STATE(18)] = 670,
  [SMALL_STATE(19)] = 707,
  [SMALL_STATE(20)] = 744,
  [SMALL_STATE(21)] = 781,
  [SMALL_STATE(22)] = 818,
  [SMALL_STATE(23)] = 855,
  [SMALL_STATE(24)] = 892,
  [SMALL_STATE(25)] = 929,
  [SMALL_STATE(26)] = 966,
  [SMALL_STATE(27)] = 1003,
  [SMALL_STATE(28)] = 1040,
  [SMALL_STATE(29)] = 1077,
  [SMALL_STATE(30)] = 1100,
  [SMALL_STATE(31)] = 1122,
  [SMALL_STATE(32)] = 1140,
  [SMALL_STATE(33)] = 1158,
  [SMALL_STATE(34)] = 1178,
  [SMALL_STATE(35)] = 1198,
  [SMALL_STATE(36)] = 1220,
  [SMALL_STATE(37)] = 1238,
  [SMALL_STATE(38)] = 1256,
  [SMALL_STATE(39)] = 1273,
  [SMALL_STATE(40)] = 1290,
  [SMALL_STATE(41)] = 1307,
  [SMALL_STATE(42)] = 1324,
  [SMALL_STATE(43)] = 1341,
  [SMALL_STATE(44)] = 1358,
  [SMALL_STATE(45)] = 1375,
  [SMALL_STATE(46)] = 1392,
  [SMALL_STATE(47)] = 1409,
  [SMALL_STATE(48)] = 1426,
  [SMALL_STATE(49)] = 1443,
  [SMALL_STATE(50)] = 1460,
  [SMALL_STATE(51)] = 1483,
  [SMALL_STATE(52)] = 1500,
  [SMALL_STATE(53)] = 1517,
  [SMALL_STATE(54)] = 1534,
  [SMALL_STATE(55)] = 1552,
  [SMALL_STATE(56)] = 1572,
  [SMALL_STATE(57)] = 1590,
  [SMALL_STATE(58)] = 1610,
  [SMALL_STATE(59)] = 1630,
  [SMALL_STATE(60)] = 1654,
  [SMALL_STATE(61)] = 1678,
  [SMALL_STATE(62)] = 1697,
  [SMALL_STATE(63)] = 1716,
  [SMALL_STATE(64)] = 1731,
  [SMALL_STATE(65)] = 1750,
  [SMALL_STATE(66)] = 1765,
  [SMALL_STATE(67)] = 1784,
  [SMALL_STATE(68)] = 1803,
  [SMALL_STATE(69)] = 1816,
  [SMALL_STATE(70)] = 1829,
  [SMALL_STATE(71)] = 1844,
  [SMALL_STATE(72)] = 1861,
  [SMALL_STATE(73)] = 1874,
  [SMALL_STATE(74)] = 1893,
  [SMALL_STATE(75)] = 1908,
  [SMALL_STATE(76)] = 1923,
  [SMALL_STATE(77)] = 1936,
  [SMALL_STATE(78)] = 1951,
  [SMALL_STATE(79)] = 1970,
  [SMALL_STATE(80)] = 1987,
  [SMALL_STATE(81)] = 2002,
  [SMALL_STATE(82)] = 2017,
  [SMALL_STATE(83)] = 2032,
  [SMALL_STATE(84)] = 2051,
  [SMALL_STATE(85)] = 2070,
  [SMALL_STATE(86)] = 2087,
  [SMALL_STATE(87)] = 2104,
  [SMALL_STATE(88)] = 2119,
  [SMALL_STATE(89)] = 2134,
  [SMALL_STATE(90)] = 2148,
  [SMALL_STATE(91)] = 2160,
  [SMALL_STATE(92)] = 2178,
  [SMALL_STATE(93)] = 2200,
  [SMALL_STATE(94)] = 2214,
  [SMALL_STATE(95)] = 2228,
  [SMALL_STATE(96)] = 2250,
  [SMALL_STATE(97)] = 2264,
  [SMALL_STATE(98)] = 2278,
  [SMALL_STATE(99)] = 2292,
  [SMALL_STATE(100)] = 2306,
  [SMALL_STATE(101)] = 2320,
  [SMALL_STATE(102)] = 2342,
  [SMALL_STATE(103)] = 2356,
  [SMALL_STATE(104)] = 2370,
  [SMALL_STATE(105)] = 2384,
  [SMALL_STATE(106)] = 2398,
  [SMALL_STATE(107)] = 2412,
  [SMALL_STATE(108)] = 2426,
  [SMALL_STATE(109)] = 2438,
  [SMALL_STATE(110)] = 2450,
  [SMALL_STATE(111)] = 2462,
  [SMALL_STATE(112)] = 2474,
  [SMALL_STATE(113)] = 2486,
  [SMALL_STATE(114)] = 2508,
  [SMALL_STATE(115)] = 2520,
  [SMALL_STATE(116)] = 2542,
  [SMALL_STATE(117)] = 2554,
  [SMALL_STATE(118)] = 2566,
  [SMALL_STATE(119)] = 2578,
  [SMALL_STATE(120)] = 2590,
  [SMALL_STATE(121)] = 2602,
  [SMALL_STATE(122)] = 2616,
  [SMALL_STATE(123)] = 2630,
  [SMALL_STATE(124)] = 2642,
  [SMALL_STATE(125)] = 2662,
  [SMALL_STATE(126)] = 2674,
  [SMALL_STATE(127)] = 2688,
  [SMALL_STATE(128)] = 2700,
  [SMALL_STATE(129)] = 2714,
  [SMALL_STATE(130)] = 2733,
  [SMALL_STATE(131)] = 2750,
  [SMALL_STATE(132)] = 2767,
  [SMALL_STATE(133)] = 2786,
  [SMALL_STATE(134)] = 2805,
  [SMALL_STATE(135)] = 2824,
  [SMALL_STATE(136)] = 2840,
  [SMALL_STATE(137)] = 2856,
  [SMALL_STATE(138)] = 2866,
  [SMALL_STATE(139)] = 2882,
  [SMALL_STATE(140)] = 2898,
  [SMALL_STATE(141)] = 2914,
  [SMALL_STATE(142)] = 2930,
  [SMALL_STATE(143)] = 2946,
  [SMALL_STATE(144)] = 2962,
  [SMALL_STATE(145)] = 2978,
  [SMALL_STATE(146)] = 2994,
  [SMALL_STATE(147)] = 3004,
  [SMALL_STATE(148)] = 3020,
  [SMALL_STATE(149)] = 3033,
  [SMALL_STATE(150)] = 3046,
  [SMALL_STATE(151)] = 3059,
  [SMALL_STATE(152)] = 3072,
  [SMALL_STATE(153)] = 3085,
  [SMALL_STATE(154)] = 3098,
  [SMALL_STATE(155)] = 3111,
  [SMALL_STATE(156)] = 3124,
  [SMALL_STATE(157)] = 3137,
  [SMALL_STATE(158)] = 3150,
  [SMALL_STATE(159)] = 3163,
  [SMALL_STATE(160)] = 3174,
  [SMALL_STATE(161)] = 3185,
  [SMALL_STATE(162)] = 3198,
  [SMALL_STATE(163)] = 3211,
  [SMALL_STATE(164)] = 3224,
  [SMALL_STATE(165)] = 3237,
  [SMALL_STATE(166)] = 3250,
  [SMALL_STATE(167)] = 3263,
  [SMALL_STATE(168)] = 3276,
  [SMALL_STATE(169)] = 3289,
  [SMALL_STATE(170)] = 3302,
  [SMALL_STATE(171)] = 3315,
  [SMALL_STATE(172)] = 3328,
  [SMALL_STATE(173)] = 3339,
  [SMALL_STATE(174)] = 3350,
  [SMALL_STATE(175)] = 3363,
  [SMALL_STATE(176)] = 3376,
  [SMALL_STATE(177)] = 3389,
  [SMALL_STATE(178)] = 3402,
  [SMALL_STATE(179)] = 3413,
  [SMALL_STATE(180)] = 3426,
  [SMALL_STATE(181)] = 3439,
  [SMALL_STATE(182)] = 3450,
  [SMALL_STATE(183)] = 3460,
  [SMALL_STATE(184)] = 3468,
  [SMALL_STATE(185)] = 3476,
  [SMALL_STATE(186)] = 3484,
  [SMALL_STATE(187)] = 3494,
  [SMALL_STATE(188)] = 3502,
  [SMALL_STATE(189)] = 3510,
  [SMALL_STATE(190)] = 3518,
  [SMALL_STATE(191)] = 3528,
  [SMALL_STATE(192)] = 3538,
  [SMALL_STATE(193)] = 3548,
  [SMALL_STATE(194)] = 3555,
  [SMALL_STATE(195)] = 3562,
  [SMALL_STATE(196)] = 3569,
  [SMALL_STATE(197)] = 3576,
  [SMALL_STATE(198)] = 3583,
  [SMALL_STATE(199)] = 3590,
  [SMALL_STATE(200)] = 3597,
  [SMALL_STATE(201)] = 3604,
  [SMALL_STATE(202)] = 3611,
  [SMALL_STATE(203)] = 3618,
  [SMALL_STATE(204)] = 3625,
  [SMALL_STATE(205)] = 3632,
  [SMALL_STATE(206)] = 3639,
  [SMALL_STATE(207)] = 3646,
  [SMALL_STATE(208)] = 3653,
  [SMALL_STATE(209)] = 3660,
  [SMALL_STATE(210)] = 3667,
  [SMALL_STATE(211)] = 3674,
  [SMALL_STATE(212)] = 3681,
  [SMALL_STATE(213)] = 3688,
  [SMALL_STATE(214)] = 3695,
  [SMALL_STATE(215)] = 3702,
  [SMALL_STATE(216)] = 3709,
  [SMALL_STATE(217)] = 3716,
  [SMALL_STATE(218)] = 3723,
  [SMALL_STATE(219)] = 3730,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 11),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 11),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 9),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 9),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_list, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_list, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_list, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_list, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_list, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_list, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_literal, 2, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_literal, 2, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 6, .production_id = 13),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 6, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_list, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_list, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 12),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 12),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_type, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_type, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_type, 4, .production_id = 10),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_type, 4, .production_id = 10),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(78),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(27),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_declaration, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_declaration, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 8),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 8),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 7),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(10),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_fragment, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bind_list_repeat1, 2), SHIFT_REPEAT(186),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bind_list_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(25),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(144),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 6),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 3, .production_id = 14),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [511] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hlb(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
