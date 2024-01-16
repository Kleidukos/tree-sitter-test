#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  sym_constructor = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_SLASH = 6,
  anon_sym_case = 7,
  anon_sym_of = 8,
  anon_sym_PIPE = 9,
  anon_sym_DASH_GT = 10,
  sym_source_file = 11,
  sym_simple_expression = 12,
  sym_binary_operation = 13,
  sym_case_expression = 14,
  sym_alternatives = 15,
  sym_alternative = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_case_expression_repeat1 = 18,
  aux_sym_alternatives_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_constructor] = "constructor",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_case] = "case ",
  [anon_sym_of] = " of",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [sym_source_file] = "source_file",
  [sym_simple_expression] = "simple_expression",
  [sym_binary_operation] = "binary_operation",
  [sym_case_expression] = "case_expression",
  [sym_alternatives] = "alternatives",
  [sym_alternative] = "alternative",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_case_expression_repeat1] = "case_expression_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_constructor] = sym_constructor,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_source_file] = sym_source_file,
  [sym_simple_expression] = sym_simple_expression,
  [sym_binary_operation] = sym_binary_operation,
  [sym_case_expression] = sym_case_expression,
  [sym_alternatives] = sym_alternatives,
  [sym_alternative] = sym_alternative,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_case_expression_repeat1] = aux_sym_case_expression_repeat1,
  [aux_sym_alternatives_repeat1] = aux_sym_alternatives_repeat1,
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
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_case_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternatives = 1,
  field_conditional = 2,
  field_pattern = 3,
  field_rhs = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternatives] = "alternatives",
  [field_conditional] = "conditional",
  [field_pattern] = "pattern",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alternatives, 3},
    {field_conditional, 1},
  [2] =
    {field_pattern, 0},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 6,
  [14] = 7,
  [15] = 2,
  [16] = 16,
  [17] = 3,
  [18] = 18,
  [19] = 4,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 23,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 29,
  [33] = 27,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_of);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_constructor] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_simple_expression] = STATE(8),
    [sym_binary_operation] = STATE(2),
    [sym_case_expression] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_case] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(9), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_case,
      anon_sym_PIPE,
  [13] = 2,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(13), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_case,
      anon_sym_PIPE,
  [26] = 3,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(13), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_case,
      anon_sym_PIPE,
  [41] = 6,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_case,
      anon_sym_PIPE,
  [62] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_case,
      anon_sym_PIPE,
  [79] = 5,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_case,
      anon_sym_PIPE,
  [98] = 6,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_case,
  [118] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_case,
    STATE(2), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_simple_expression,
    STATE(9), 2,
      sym_case_expression,
      aux_sym_source_file_repeat1,
  [138] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_case,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_simple_expression,
    STATE(9), 2,
      sym_case_expression,
      aux_sym_source_file_repeat1,
  [158] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_case,
    STATE(12), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [173] = 4,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_case,
    STATE(12), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [188] = 3,
    ACTIONS(56), 1,
      anon_sym_STAR,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_of,
  [200] = 4,
    ACTIONS(56), 1,
      anon_sym_STAR,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(60), 1,
      anon_sym_DASH,
    ACTIONS(13), 2,
      anon_sym_PLUS,
      anon_sym_of,
  [214] = 1,
    ACTIONS(9), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_of,
  [222] = 4,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_case,
  [236] = 1,
    ACTIONS(13), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_of,
  [244] = 5,
    ACTIONS(56), 1,
      anon_sym_STAR,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(60), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_of,
  [260] = 2,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(13), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_of,
  [270] = 4,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(21), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_case,
  [284] = 4,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_case,
  [298] = 2,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_case,
      anon_sym_PIPE,
  [307] = 3,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(2), 1,
      sym_binary_operation,
    STATE(6), 1,
      sym_simple_expression,
  [317] = 3,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(2), 1,
      sym_binary_operation,
    STATE(5), 1,
      sym_simple_expression,
  [327] = 3,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(15), 1,
      sym_binary_operation,
    STATE(18), 1,
      sym_simple_expression,
  [337] = 2,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(11), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [345] = 3,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(14), 1,
      sym_simple_expression,
    STATE(15), 1,
      sym_binary_operation,
  [355] = 3,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(13), 1,
      sym_simple_expression,
    STATE(15), 1,
      sym_binary_operation,
  [365] = 3,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(15), 1,
      sym_binary_operation,
    STATE(19), 1,
      sym_simple_expression,
  [375] = 3,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(15), 1,
      sym_binary_operation,
    STATE(17), 1,
      sym_simple_expression,
  [385] = 3,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(2), 1,
      sym_binary_operation,
    STATE(3), 1,
      sym_simple_expression,
  [395] = 3,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(2), 1,
      sym_binary_operation,
    STATE(4), 1,
      sym_simple_expression,
  [405] = 3,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(2), 1,
      sym_binary_operation,
    STATE(7), 1,
      sym_simple_expression,
  [415] = 2,
    ACTIONS(87), 1,
      sym_constructor,
    STATE(22), 1,
      sym_alternative,
  [422] = 2,
    ACTIONS(87), 1,
      sym_constructor,
    STATE(20), 1,
      sym_alternative,
  [429] = 1,
    ACTIONS(89), 1,
      anon_sym_DASH_GT,
  [433] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 200,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 260,
  [SMALL_STATE(20)] = 270,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 298,
  [SMALL_STATE(23)] = 307,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 327,
  [SMALL_STATE(26)] = 337,
  [SMALL_STATE(27)] = 345,
  [SMALL_STATE(28)] = 355,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 375,
  [SMALL_STATE(31)] = 385,
  [SMALL_STATE(32)] = 395,
  [SMALL_STATE(33)] = 405,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 422,
  [SMALL_STATE(36)] = 429,
  [SMALL_STATE(37)] = 433,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(35),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cases(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
