#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_POSITIVE_GOOD = 2,
  anon_sym_POSITIVE_BAD = 3,
  anon_sym_ = 4,
  aux_sym_yyyymmdd_token1 = 5,
  anon_sym_SLASH = 6,
  aux_sym_yyyymmdd_token2 = 7,
  aux_sym_yyyymmdd_token3 = 8,
  sym_amount = 9,
  aux_sym_rest_of_line_string_token1 = 10,
  aux_sym_category_token1 = 11,
  anon_sym_GT = 12,
  sym_source_file = 13,
  sym_positive_statement = 14,
  sym_data = 15,
  sym_line = 16,
  sym_date = 17,
  sym_yyyymmdd = 18,
  sym_mmddyyyy = 19,
  sym_rest_of_line_string = 20,
  sym_category = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_data_repeat1 = 23,
  aux_sym_line_repeat1 = 24,
  aux_sym_category_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POSITIVE_GOOD] = "POSITIVE_GOOD",
  [anon_sym_POSITIVE_BAD] = "POSITIVE_BAD",
  [anon_sym_] = " ",
  [aux_sym_yyyymmdd_token1] = "yyyymmdd_token1",
  [anon_sym_SLASH] = "/",
  [aux_sym_yyyymmdd_token2] = "yyyymmdd_token2",
  [aux_sym_yyyymmdd_token3] = "yyyymmdd_token3",
  [sym_amount] = "amount",
  [aux_sym_rest_of_line_string_token1] = "rest_of_line_string_token1",
  [aux_sym_category_token1] = "category_token1",
  [anon_sym_GT] = ">",
  [sym_source_file] = "source_file",
  [sym_positive_statement] = "positive_statement",
  [sym_data] = "data",
  [sym_line] = "line",
  [sym_date] = "date",
  [sym_yyyymmdd] = "yyyymmdd",
  [sym_mmddyyyy] = "mmddyyyy",
  [sym_rest_of_line_string] = "rest_of_line_string",
  [sym_category] = "category",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_data_repeat1] = "data_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_category_repeat1] = "category_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POSITIVE_GOOD] = anon_sym_POSITIVE_GOOD,
  [anon_sym_POSITIVE_BAD] = anon_sym_POSITIVE_BAD,
  [anon_sym_] = anon_sym_,
  [aux_sym_yyyymmdd_token1] = aux_sym_yyyymmdd_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_yyyymmdd_token2] = aux_sym_yyyymmdd_token2,
  [aux_sym_yyyymmdd_token3] = aux_sym_yyyymmdd_token3,
  [sym_amount] = sym_amount,
  [aux_sym_rest_of_line_string_token1] = aux_sym_rest_of_line_string_token1,
  [aux_sym_category_token1] = aux_sym_category_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_source_file] = sym_source_file,
  [sym_positive_statement] = sym_positive_statement,
  [sym_data] = sym_data,
  [sym_line] = sym_line,
  [sym_date] = sym_date,
  [sym_yyyymmdd] = sym_yyyymmdd,
  [sym_mmddyyyy] = sym_mmddyyyy,
  [sym_rest_of_line_string] = sym_rest_of_line_string,
  [sym_category] = sym_category,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym_category_repeat1] = aux_sym_category_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POSITIVE_GOOD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POSITIVE_BAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yyyymmdd_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yyyymmdd_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yyyymmdd_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rest_of_line_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_category_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_yyyymmdd] = {
    .visible = true,
    .named = true,
  },
  [sym_mmddyyyy] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_string] = {
    .visible = true,
    .named = true,
  },
  [sym_category] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_category_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 13,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(34);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(3);
      if (lookahead == 'G') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'V') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(36);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POSITIVE_GOOD);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POSITIVE_BAD);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_amount);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_rest_of_line_string_token1);
      if (lookahead == '\t') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_rest_of_line_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_category_token1);
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_category_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POSITIVE_GOOD] = ACTIONS(1),
    [anon_sym_POSITIVE_BAD] = ACTIONS(1),
    [aux_sym_yyyymmdd_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_yyyymmdd_token2] = ACTIONS(1),
    [aux_sym_yyyymmdd_token3] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_positive_statement] = STATE(2),
    [anon_sym_POSITIVE_GOOD] = ACTIONS(3),
    [anon_sym_POSITIVE_BAD] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 1,
      aux_sym_data_repeat1,
    STATE(9), 1,
      sym_line,
    STATE(21), 1,
      sym_date,
    STATE(37), 1,
      sym_data,
    STATE(25), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [32] = 10,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_data_repeat1,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(9), 1,
      sym_line,
    STATE(21), 1,
      sym_date,
    STATE(34), 1,
      sym_data,
    STATE(25), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [64] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(22), 1,
      aux_sym_yyyymmdd_token2,
    STATE(4), 1,
      aux_sym_data_repeat1,
    STATE(9), 1,
      sym_line,
    STATE(21), 1,
      sym_date,
    STATE(25), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [87] = 7,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_yyyymmdd_token1,
    STATE(4), 1,
      aux_sym_data_repeat1,
    STATE(9), 1,
      sym_line,
    STATE(21), 1,
      sym_date,
    STATE(25), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [110] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(34), 2,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
  [124] = 2,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(38), 2,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
  [133] = 2,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(42), 2,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
  [142] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_LF,
    ACTIONS(48), 2,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
  [153] = 2,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(52), 2,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
  [162] = 4,
    ACTIONS(54), 1,
      anon_sym_,
    ACTIONS(56), 1,
      aux_sym_rest_of_line_string_token1,
    STATE(7), 1,
      sym_rest_of_line_string,
    STATE(17), 1,
      aux_sym_line_repeat1,
  [175] = 4,
    ACTIONS(58), 1,
      anon_sym_,
    ACTIONS(60), 1,
      aux_sym_category_token1,
    STATE(13), 1,
      aux_sym_line_repeat1,
    STATE(23), 1,
      sym_category,
  [188] = 3,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(65), 1,
      aux_sym_category_token1,
    STATE(13), 1,
      aux_sym_line_repeat1,
  [198] = 3,
    ACTIONS(67), 1,
      anon_sym_,
    ACTIONS(69), 1,
      anon_sym_GT,
    STATE(14), 1,
      aux_sym_category_repeat1,
  [208] = 2,
    ACTIONS(72), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      aux_sym_yyyymmdd_token1,
  [216] = 3,
    ACTIONS(74), 1,
      anon_sym_,
    ACTIONS(76), 1,
      sym_amount,
    STATE(19), 1,
      aux_sym_line_repeat1,
  [226] = 3,
    ACTIONS(65), 1,
      aux_sym_rest_of_line_string_token1,
    ACTIONS(78), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_line_repeat1,
  [236] = 3,
    ACTIONS(81), 1,
      anon_sym_,
    ACTIONS(83), 1,
      anon_sym_GT,
    STATE(14), 1,
      aux_sym_category_repeat1,
  [246] = 3,
    ACTIONS(65), 1,
      sym_amount,
    ACTIONS(85), 1,
      anon_sym_,
    STATE(19), 1,
      aux_sym_line_repeat1,
  [256] = 3,
    ACTIONS(83), 1,
      anon_sym_GT,
    ACTIONS(88), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_category_repeat1,
  [266] = 2,
    ACTIONS(90), 1,
      anon_sym_,
    STATE(16), 1,
      aux_sym_line_repeat1,
  [273] = 2,
    ACTIONS(67), 1,
      anon_sym_,
    ACTIONS(92), 1,
      anon_sym_GT,
  [280] = 2,
    ACTIONS(94), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_line_repeat1,
  [287] = 2,
    ACTIONS(96), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_line_repeat1,
  [294] = 1,
    ACTIONS(98), 1,
      anon_sym_,
  [298] = 1,
    ACTIONS(100), 1,
      anon_sym_SLASH,
  [302] = 1,
    ACTIONS(102), 1,
      anon_sym_,
  [306] = 1,
    ACTIONS(104), 1,
      anon_sym_,
  [310] = 1,
    ACTIONS(106), 1,
      aux_sym_yyyymmdd_token3,
  [314] = 1,
    ACTIONS(108), 1,
      aux_sym_yyyymmdd_token1,
  [318] = 1,
    ACTIONS(110), 1,
      aux_sym_category_token1,
  [322] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [326] = 1,
    ACTIONS(114), 1,
      anon_sym_SLASH,
  [330] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [334] = 1,
    ACTIONS(118), 1,
      aux_sym_yyyymmdd_token3,
  [338] = 1,
    ACTIONS(120), 1,
      aux_sym_yyyymmdd_token2,
  [342] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
  [346] = 1,
    ACTIONS(122), 1,
      anon_sym_SLASH,
  [350] = 1,
    ACTIONS(124), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 216,
  [SMALL_STATE(17)] = 226,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 266,
  [SMALL_STATE(22)] = 273,
  [SMALL_STATE(23)] = 280,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 302,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 310,
  [SMALL_STATE(30)] = 314,
  [SMALL_STATE(31)] = 318,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 326,
  [SMALL_STATE(34)] = 330,
  [SMALL_STATE(35)] = 334,
  [SMALL_STATE(36)] = 338,
  [SMALL_STATE(37)] = 342,
  [SMALL_STATE(38)] = 346,
  [SMALL_STATE(39)] = 350,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(39),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 7),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 7),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_string, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_string, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_statement, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive_statement, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(13),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_category_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_category_repeat1, 2), SHIFT_REPEAT(31),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(19),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_category_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yyyymmdd, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmddyyyy, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pmf(void) {
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
