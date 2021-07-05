#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_fn = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_import = 8,
  anon_sym_from = 9,
  anon_sym_export = 10,
  anon_sym_option = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_DOT = 16,
  anon_sym_with = 17,
  anon_sym_as = 18,
  sym_raw_string_literal = 19,
  anon_sym_DQUOTE = 20,
  sym_escaped_fragment = 21,
  anon_sym_DOLLAR_LBRACE = 22,
  sym_char_fragment = 23,
  sym_int_literal = 24,
  sym_true = 25,
  sym_false = 26,
  sym_comment = 27,
  sym_source_file = 28,
  sym_function_declaration = 29,
  sym_parameter_list = 30,
  sym_parameter_declaration = 31,
  sym_import_declaration = 32,
  sym_export_declaration = 33,
  sym_option_type = 34,
  sym_block = 35,
  sym__statement_list = 36,
  sym__statement = 37,
  sym__expression = 38,
  sym_parenthesized_expression = 39,
  sym_selector_expression = 40,
  sym_call_expression = 41,
  sym_argument_list = 42,
  sym_block_literal = 43,
  sym_interpreted_string_literal = 44,
  sym__string_fragment = 45,
  sym_interpolated_fragment = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_parameter_list_repeat1 = 48,
  aux_sym__statement_list_repeat1 = 49,
  aux_sym_argument_list_repeat1 = 50,
  aux_sym_interpreted_string_literal_repeat1 = 51,
  alias_sym_type_identifier = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_export] = "export",
  [anon_sym_option] = "option",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_with] = "with",
  [anon_sym_as] = "as",
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
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_export_declaration] = "export_declaration",
  [sym_option_type] = "option_type",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_block_literal] = "block_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__string_fragment] = "_string_fragment",
  [sym_interpolated_fragment] = "interpolated_fragment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_as] = anon_sym_as,
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
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_import_declaration] = sym_import_declaration,
  [sym_export_declaration] = sym_export_declaration,
  [sym_option_type] = sym_option_type,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_block_literal] = sym_block_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__string_fragment] = sym__string_fragment,
  [sym_interpolated_fragment] = sym_interpolated_fragment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_export_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_option_type] = {
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
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
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
  field_subtype = 10,
  field_type = 11,
  field_with = 12,
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
  [field_subtype] = "subtype",
  [field_type] = "type",
  [field_with] = "with",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 4},
  [6] = {.index = 5, .length = 4},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 4},
  [12] = {.index = 20, .length = 4},
  [13] = {.index = 24, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_parameters, 2},
    {field_result, 3},
  [3] =
    {field_name, 1},
    {field_type, 0},
  [5] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_result, 3},
  [9] =
    {field_arguments, 1},
    {field_function, 0},
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
    [3] = alias_sym_type_identifier,
  },
  [7] = {
    [0] = alias_sym_type_identifier,
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(12);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(20);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(26);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(36);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(21);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(20);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_escaped_fragment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_char_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(5);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
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
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
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
  [172] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
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
    [sym_source_file] = STATE(179),
    [sym_function_declaration] = STATE(116),
    [sym_import_declaration] = STATE(116),
    [sym_export_declaration] = STATE(116),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
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
      anon_sym_option,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym__expression,
    STATE(127), 1,
      sym__statement,
    STATE(148), 1,
      sym_option_type,
    STATE(167), 1,
      sym__statement_list,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [46] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym__expression,
    STATE(127), 1,
      sym__statement,
    STATE(148), 1,
      sym_option_type,
    STATE(173), 1,
      sym__statement_list,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [92] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym__expression,
    STATE(127), 1,
      sym__statement,
    STATE(148), 1,
      sym_option_type,
    STATE(162), 1,
      sym__statement_list,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [138] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym__expression,
    STATE(133), 1,
      sym__statement,
    STATE(148), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [181] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [224] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym__expression,
    STATE(133), 1,
      sym__statement,
    STATE(148), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [267] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [310] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [353] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [393] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [433] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [473] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [513] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [553] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym__expression,
    STATE(133), 1,
      sym__statement,
    STATE(148), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [593] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [633] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym__expression,
    STATE(153), 1,
      sym_option_type,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(77), 2,
      sym_true,
      sym_false,
    STATE(45), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [670] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym__expression,
    STATE(148), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [707] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [744] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [781] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym__expression,
    STATE(148), 1,
      sym_option_type,
    ACTIONS(21), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(86), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [818] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [855] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym__expression,
    STATE(153), 1,
      sym_option_type,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(77), 2,
      sym_true,
      sym_false,
    STATE(45), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [892] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [929] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [966] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym__expression,
    STATE(153), 1,
      sym_option_type,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(77), 2,
      sym_true,
      sym_false,
    STATE(45), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [1003] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [1040] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym__expression,
    STATE(154), 1,
      sym_option_type,
    ACTIONS(41), 2,
      sym_raw_string_literal,
      sym_int_literal,
    ACTIONS(45), 2,
      sym_true,
      sym_false,
    STATE(94), 5,
      sym_parenthesized_expression,
      sym_selector_expression,
      sym_call_expression,
      sym_block_literal,
      sym_interpreted_string_literal,
  [1077] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_comment,
    STATE(43), 1,
      sym_block,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1100] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 8,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1118] = 4,
    ACTIONS(85), 1,
      sym_comment,
    STATE(37), 1,
      sym_argument_list,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(93), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1138] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_as,
    STATE(37), 1,
      sym_argument_list,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(93), 6,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
  [1160] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(99), 8,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1178] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 8,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1196] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(107), 8,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1214] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_with,
    ACTIONS(115), 1,
      anon_sym_as,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 6,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
  [1236] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_with,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1256] = 6,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(36), 1,
      sym_argument_list,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(121), 4,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [1279] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(129), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1296] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(133), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1313] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(137), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1330] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(141), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1347] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(145), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1364] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(149), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1381] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1398] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(153), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1415] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(157), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1432] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(161), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1449] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(165), 7,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_import,
      anon_sym_export,
      anon_sym_DOT,
      anon_sym_as,
  [1466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
    ACTIONS(79), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_source_file_repeat1,
    STATE(116), 3,
      sym_function_declaration,
      sym_import_declaration,
      sym_export_declaration,
  [1508] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_comment,
    STATE(99), 1,
      sym_block,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 4,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [1528] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_comment,
    STATE(85), 1,
      sym_block,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(177), 4,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [1548] = 5,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_block,
    ACTIONS(81), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1568] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LT,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(183), 5,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LBRACE,
  [1586] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      anon_sym_fn,
    ACTIONS(192), 1,
      anon_sym_import,
    ACTIONS(195), 1,
      anon_sym_export,
    STATE(56), 1,
      aux_sym_source_file_repeat1,
    STATE(116), 3,
      sym_function_declaration,
      sym_import_declaration,
      sym_export_declaration,
  [1610] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(200), 5,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LBRACE,
  [1625] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(204), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(65), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1644] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(76), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1663] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(59), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1682] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_as,
    STATE(73), 1,
      sym_argument_list,
    ACTIONS(91), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1740] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(76), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1772] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(76), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1791] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(67), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1810] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(228), 5,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LBRACE,
  [1825] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(93), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1842] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(230), 1,
      anon_sym_with,
    ACTIONS(111), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym_argument_list,
    ACTIONS(91), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_with,
    ACTIONS(109), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [1889] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(236), 5,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LBRACE,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1917] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(240), 2,
      sym_escaped_fragment,
      sym_char_fragment,
    STATE(76), 3,
      sym__string_fragment,
      sym_interpolated_fragment,
      aux_sym_interpreted_string_literal_repeat1,
  [1936] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [1951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_with,
    ACTIONS(248), 1,
      anon_sym_as,
    ACTIONS(109), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1968] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(252), 5,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LBRACE,
  [1983] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(256), 5,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LBRACE,
  [1998] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      anon_sym_as,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(93), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2017] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [2032] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(260), 1,
      anon_sym_with,
    ACTIONS(262), 1,
      anon_sym_as,
    ACTIONS(111), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2051] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_with,
      anon_sym_as,
  [2066] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(266), 4,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [2080] = 3,
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
  [2094] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    STATE(78), 1,
      sym_argument_list,
    STATE(146), 1,
      aux_sym_argument_list_repeat1,
  [2116] = 3,
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
  [2130] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2144] = 3,
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
  [2158] = 3,
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
  [2172] = 3,
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
  [2186] = 3,
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
  [2200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2212] = 3,
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
  [2226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2262] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(278), 4,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [2276] = 3,
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
  [2290] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    STATE(141), 1,
      aux_sym_argument_list_repeat1,
  [2312] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
    STATE(139), 1,
      aux_sym_argument_list_repeat1,
  [2334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2346] = 3,
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
  [2360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2372] = 3,
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
  [2386] = 6,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(290), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2406] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_parameter_declaration,
    STATE(177), 1,
      sym_option_type,
  [2428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2452] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_parameter_declaration,
    STATE(177), 1,
      sym_option_type,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2498] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(308), 4,
      anon_sym_SEMI,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_as,
  [2524] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 3,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [2542] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_option,
    STATE(53), 2,
      sym_parameter_list,
      sym_option_type,
  [2559] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_parameter_declaration,
    STATE(177), 1,
      sym_option_type,
  [2578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_parameter_declaration,
    STATE(177), 1,
      sym_option_type,
  [2597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_parameter_declaration,
    STATE(177), 1,
      sym_option_type,
  [2616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_parameter_declaration,
    STATE(177), 1,
      sym_option_type,
  [2652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
  [2668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
  [2684] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym__statement_list_repeat1,
  [2700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_argument_list,
  [2716] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      aux_sym__statement_list_repeat1,
  [2732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_argument_list,
  [2748] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_DQUOTE,
      sym_escaped_fragment,
      anon_sym_DOLLAR_LBRACE,
      sym_char_fragment,
  [2758] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym__statement_list_repeat1,
  [2774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(149), 1,
      sym_parameter_declaration,
    STATE(177), 1,
      sym_option_type,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_import,
      anon_sym_export,
  [2800] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
  [2824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_parameter_list_repeat1,
  [2837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 2,
      sym_identifier,
      anon_sym_option,
  [2848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 2,
      sym_identifier,
      anon_sym_option,
  [2859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LT,
    ACTIONS(181), 2,
      sym_identifier,
      anon_sym_LBRACE,
  [2870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_argument_list_repeat1,
  [2883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
  [2896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_argument_list_repeat1,
  [2909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_argument_list_repeat1,
  [2922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_parameter_list_repeat1,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 2,
      sym_identifier,
      anon_sym_option,
  [2946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 2,
      sym_identifier,
      anon_sym_option,
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_argument_list_repeat1,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
  [2983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      sym_identifier,
      anon_sym_LBRACE,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_parameter_list,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_block,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_from,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_GT,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
  [3104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
  [3118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_identifier,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_GT,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_identifier,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_identifier,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_identifier,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_identifier,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_identifier,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
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
  [SMALL_STATE(31)] = 1118,
  [SMALL_STATE(32)] = 1138,
  [SMALL_STATE(33)] = 1160,
  [SMALL_STATE(34)] = 1178,
  [SMALL_STATE(35)] = 1196,
  [SMALL_STATE(36)] = 1214,
  [SMALL_STATE(37)] = 1236,
  [SMALL_STATE(38)] = 1256,
  [SMALL_STATE(39)] = 1279,
  [SMALL_STATE(40)] = 1296,
  [SMALL_STATE(41)] = 1313,
  [SMALL_STATE(42)] = 1330,
  [SMALL_STATE(43)] = 1347,
  [SMALL_STATE(44)] = 1364,
  [SMALL_STATE(45)] = 1381,
  [SMALL_STATE(46)] = 1398,
  [SMALL_STATE(47)] = 1415,
  [SMALL_STATE(48)] = 1432,
  [SMALL_STATE(49)] = 1449,
  [SMALL_STATE(50)] = 1466,
  [SMALL_STATE(51)] = 1484,
  [SMALL_STATE(52)] = 1508,
  [SMALL_STATE(53)] = 1528,
  [SMALL_STATE(54)] = 1548,
  [SMALL_STATE(55)] = 1568,
  [SMALL_STATE(56)] = 1586,
  [SMALL_STATE(57)] = 1610,
  [SMALL_STATE(58)] = 1625,
  [SMALL_STATE(59)] = 1644,
  [SMALL_STATE(60)] = 1663,
  [SMALL_STATE(61)] = 1682,
  [SMALL_STATE(62)] = 1697,
  [SMALL_STATE(63)] = 1710,
  [SMALL_STATE(64)] = 1723,
  [SMALL_STATE(65)] = 1740,
  [SMALL_STATE(66)] = 1759,
  [SMALL_STATE(67)] = 1772,
  [SMALL_STATE(68)] = 1791,
  [SMALL_STATE(69)] = 1810,
  [SMALL_STATE(70)] = 1825,
  [SMALL_STATE(71)] = 1842,
  [SMALL_STATE(72)] = 1859,
  [SMALL_STATE(73)] = 1874,
  [SMALL_STATE(74)] = 1889,
  [SMALL_STATE(75)] = 1904,
  [SMALL_STATE(76)] = 1917,
  [SMALL_STATE(77)] = 1936,
  [SMALL_STATE(78)] = 1951,
  [SMALL_STATE(79)] = 1968,
  [SMALL_STATE(80)] = 1983,
  [SMALL_STATE(81)] = 1998,
  [SMALL_STATE(82)] = 2017,
  [SMALL_STATE(83)] = 2032,
  [SMALL_STATE(84)] = 2051,
  [SMALL_STATE(85)] = 2066,
  [SMALL_STATE(86)] = 2080,
  [SMALL_STATE(87)] = 2094,
  [SMALL_STATE(88)] = 2116,
  [SMALL_STATE(89)] = 2130,
  [SMALL_STATE(90)] = 2144,
  [SMALL_STATE(91)] = 2158,
  [SMALL_STATE(92)] = 2172,
  [SMALL_STATE(93)] = 2186,
  [SMALL_STATE(94)] = 2200,
  [SMALL_STATE(95)] = 2212,
  [SMALL_STATE(96)] = 2226,
  [SMALL_STATE(97)] = 2238,
  [SMALL_STATE(98)] = 2250,
  [SMALL_STATE(99)] = 2262,
  [SMALL_STATE(100)] = 2276,
  [SMALL_STATE(101)] = 2290,
  [SMALL_STATE(102)] = 2312,
  [SMALL_STATE(103)] = 2334,
  [SMALL_STATE(104)] = 2346,
  [SMALL_STATE(105)] = 2360,
  [SMALL_STATE(106)] = 2372,
  [SMALL_STATE(107)] = 2386,
  [SMALL_STATE(108)] = 2406,
  [SMALL_STATE(109)] = 2428,
  [SMALL_STATE(110)] = 2440,
  [SMALL_STATE(111)] = 2452,
  [SMALL_STATE(112)] = 2474,
  [SMALL_STATE(113)] = 2486,
  [SMALL_STATE(114)] = 2498,
  [SMALL_STATE(115)] = 2512,
  [SMALL_STATE(116)] = 2524,
  [SMALL_STATE(117)] = 2542,
  [SMALL_STATE(118)] = 2559,
  [SMALL_STATE(119)] = 2578,
  [SMALL_STATE(120)] = 2597,
  [SMALL_STATE(121)] = 2616,
  [SMALL_STATE(122)] = 2633,
  [SMALL_STATE(123)] = 2652,
  [SMALL_STATE(124)] = 2668,
  [SMALL_STATE(125)] = 2684,
  [SMALL_STATE(126)] = 2700,
  [SMALL_STATE(127)] = 2716,
  [SMALL_STATE(128)] = 2732,
  [SMALL_STATE(129)] = 2748,
  [SMALL_STATE(130)] = 2758,
  [SMALL_STATE(131)] = 2774,
  [SMALL_STATE(132)] = 2790,
  [SMALL_STATE(133)] = 2800,
  [SMALL_STATE(134)] = 2811,
  [SMALL_STATE(135)] = 2824,
  [SMALL_STATE(136)] = 2837,
  [SMALL_STATE(137)] = 2848,
  [SMALL_STATE(138)] = 2859,
  [SMALL_STATE(139)] = 2870,
  [SMALL_STATE(140)] = 2883,
  [SMALL_STATE(141)] = 2896,
  [SMALL_STATE(142)] = 2909,
  [SMALL_STATE(143)] = 2922,
  [SMALL_STATE(144)] = 2935,
  [SMALL_STATE(145)] = 2946,
  [SMALL_STATE(146)] = 2957,
  [SMALL_STATE(147)] = 2970,
  [SMALL_STATE(148)] = 2983,
  [SMALL_STATE(149)] = 2993,
  [SMALL_STATE(150)] = 3001,
  [SMALL_STATE(151)] = 3009,
  [SMALL_STATE(152)] = 3017,
  [SMALL_STATE(153)] = 3027,
  [SMALL_STATE(154)] = 3037,
  [SMALL_STATE(155)] = 3047,
  [SMALL_STATE(156)] = 3055,
  [SMALL_STATE(157)] = 3062,
  [SMALL_STATE(158)] = 3069,
  [SMALL_STATE(159)] = 3076,
  [SMALL_STATE(160)] = 3083,
  [SMALL_STATE(161)] = 3090,
  [SMALL_STATE(162)] = 3097,
  [SMALL_STATE(163)] = 3104,
  [SMALL_STATE(164)] = 3111,
  [SMALL_STATE(165)] = 3118,
  [SMALL_STATE(166)] = 3125,
  [SMALL_STATE(167)] = 3132,
  [SMALL_STATE(168)] = 3139,
  [SMALL_STATE(169)] = 3146,
  [SMALL_STATE(170)] = 3153,
  [SMALL_STATE(171)] = 3160,
  [SMALL_STATE(172)] = 3167,
  [SMALL_STATE(173)] = 3174,
  [SMALL_STATE(174)] = 3181,
  [SMALL_STATE(175)] = 3188,
  [SMALL_STATE(176)] = 3195,
  [SMALL_STATE(177)] = 3202,
  [SMALL_STATE(178)] = 3209,
  [SMALL_STATE(179)] = 3216,
  [SMALL_STATE(180)] = 3223,
  [SMALL_STATE(181)] = 3230,
  [SMALL_STATE(182)] = 3237,
  [SMALL_STATE(183)] = 3244,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 11),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 11),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 12),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 12),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 9),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 9),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_literal, 2, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_literal, 2, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_literal, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_literal, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 6, .production_id = 13),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 6, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_type, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_type, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_type, 4, .production_id = 10),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_type, 4, .production_id = 10),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(76),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(25),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 6),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 6),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_declaration, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_declaration, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(15),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(15),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_fragment, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(131),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(27),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [440] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
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
