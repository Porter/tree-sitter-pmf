#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  sym_balance_str = 13,
  sym_source_file = 14,
  sym_positive_statement = 15,
  sym_data = 16,
  sym_transaction = 17,
  sym_date = 18,
  sym_yyyymmdd = 19,
  sym_mmddyyyy = 20,
  sym_rest_of_line_string = 21,
  sym_category = 22,
  sym_balance = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_data_repeat1 = 25,
  aux_sym_transaction_repeat1 = 26,
  aux_sym_category_repeat1 = 27,
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
  [sym_balance_str] = "balance_str",
  [sym_source_file] = "source_file",
  [sym_positive_statement] = "positive_statement",
  [sym_data] = "data",
  [sym_transaction] = "transaction",
  [sym_date] = "date",
  [sym_yyyymmdd] = "yyyymmdd",
  [sym_mmddyyyy] = "mmddyyyy",
  [sym_rest_of_line_string] = "rest_of_line_string",
  [sym_category] = "category",
  [sym_balance] = "balance",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_data_repeat1] = "data_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
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
  [sym_balance_str] = sym_balance_str,
  [sym_source_file] = sym_source_file,
  [sym_positive_statement] = sym_positive_statement,
  [sym_data] = sym_data,
  [sym_transaction] = sym_transaction,
  [sym_date] = sym_date,
  [sym_yyyymmdd] = sym_yyyymmdd,
  [sym_mmddyyyy] = sym_mmddyyyy,
  [sym_rest_of_line_string] = sym_rest_of_line_string,
  [sym_category] = sym_category,
  [sym_balance] = sym_balance,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
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
  [sym_balance_str] = {
    .visible = true,
    .named = true,
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
  [sym_transaction] = {
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
  [sym_balance] = {
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
  [aux_sym_transaction_repeat1] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 15,
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
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == 'B') ADVANCE(5);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'G') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(44);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == 'B') ADVANCE(5);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == 'B') ADVANCE(5);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_POSITIVE_GOOD);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_POSITIVE_BAD);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_amount);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_rest_of_line_string_token1);
      if (lookahead == '\t') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_rest_of_line_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_category_token1);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_category_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_balance_str);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
    [sym_balance_str] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym_positive_statement] = STATE(2),
    [anon_sym_POSITIVE_GOOD] = ACTIONS(3),
    [anon_sym_POSITIVE_BAD] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(13), 1,
      sym_balance_str,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 1,
      aux_sym_data_repeat1,
    STATE(22), 1,
      sym_date,
    STATE(38), 1,
      sym_data,
    STATE(10), 2,
      sym_transaction,
      sym_balance,
    STATE(37), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [36] = 11,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(13), 1,
      sym_balance_str,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_data_repeat1,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(22), 1,
      sym_date,
    STATE(33), 1,
      sym_data,
    STATE(10), 2,
      sym_transaction,
      sym_balance,
    STATE(37), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [72] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(24), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(27), 1,
      sym_balance_str,
    STATE(4), 1,
      aux_sym_data_repeat1,
    STATE(22), 1,
      sym_date,
    STATE(10), 2,
      sym_transaction,
      sym_balance,
    STATE(37), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [99] = 8,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(34), 1,
      sym_balance_str,
    STATE(4), 1,
      aux_sym_data_repeat1,
    STATE(22), 1,
      sym_date,
    STATE(10), 2,
      sym_transaction,
      sym_balance,
    STATE(37), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [126] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(41), 3,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
      sym_balance_str,
  [141] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(45), 3,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
      sym_balance_str,
  [151] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(49), 3,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
      sym_balance_str,
  [161] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
      sym_balance_str,
  [171] = 3,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(59), 3,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
      sym_balance_str,
  [183] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 3,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
      sym_balance_str,
  [193] = 2,
    ACTIONS(65), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      aux_sym_yyyymmdd_token1,
      sym_balance_str,
  [202] = 4,
    ACTIONS(67), 1,
      anon_sym_,
    ACTIONS(69), 1,
      aux_sym_category_token1,
    STATE(15), 1,
      aux_sym_transaction_repeat1,
    STATE(24), 1,
      sym_category,
  [215] = 4,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(73), 1,
      aux_sym_rest_of_line_string_token1,
    STATE(8), 1,
      sym_rest_of_line_string,
    STATE(19), 1,
      aux_sym_transaction_repeat1,
  [228] = 3,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(78), 1,
      aux_sym_category_token1,
    STATE(15), 1,
      aux_sym_transaction_repeat1,
  [238] = 3,
    ACTIONS(80), 1,
      anon_sym_,
    ACTIONS(82), 1,
      anon_sym_GT,
    STATE(20), 1,
      aux_sym_category_repeat1,
  [248] = 3,
    ACTIONS(82), 1,
      anon_sym_GT,
    ACTIONS(84), 1,
      anon_sym_,
    STATE(16), 1,
      aux_sym_category_repeat1,
  [258] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(88), 1,
      sym_amount,
    STATE(21), 1,
      aux_sym_transaction_repeat1,
  [268] = 3,
    ACTIONS(78), 1,
      aux_sym_rest_of_line_string_token1,
    ACTIONS(90), 1,
      anon_sym_,
    STATE(19), 1,
      aux_sym_transaction_repeat1,
  [278] = 3,
    ACTIONS(93), 1,
      anon_sym_,
    ACTIONS(95), 1,
      anon_sym_GT,
    STATE(20), 1,
      aux_sym_category_repeat1,
  [288] = 3,
    ACTIONS(78), 1,
      sym_amount,
    ACTIONS(98), 1,
      anon_sym_,
    STATE(21), 1,
      aux_sym_transaction_repeat1,
  [298] = 2,
    ACTIONS(101), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_transaction_repeat1,
  [305] = 2,
    ACTIONS(103), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_transaction_repeat1,
  [312] = 2,
    ACTIONS(105), 1,
      anon_sym_,
    STATE(14), 1,
      aux_sym_transaction_repeat1,
  [319] = 2,
    ACTIONS(93), 1,
      anon_sym_,
    ACTIONS(107), 1,
      anon_sym_GT,
  [326] = 1,
    ACTIONS(109), 1,
      anon_sym_SLASH,
  [330] = 1,
    ACTIONS(111), 1,
      anon_sym_SLASH,
  [334] = 1,
    ACTIONS(113), 1,
      aux_sym_yyyymmdd_token3,
  [338] = 1,
    ACTIONS(115), 1,
      aux_sym_yyyymmdd_token1,
  [342] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [346] = 1,
    ACTIONS(119), 1,
      anon_sym_,
  [350] = 1,
    ACTIONS(121), 1,
      anon_sym_,
  [354] = 1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [358] = 1,
    ACTIONS(125), 1,
      aux_sym_category_token1,
  [362] = 1,
    ACTIONS(127), 1,
      aux_sym_yyyymmdd_token3,
  [366] = 1,
    ACTIONS(129), 1,
      aux_sym_yyyymmdd_token2,
  [370] = 1,
    ACTIONS(131), 1,
      anon_sym_,
  [374] = 1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
  [378] = 1,
    ACTIONS(133), 1,
      sym_amount,
  [382] = 1,
    ACTIONS(135), 1,
      anon_sym_SLASH,
  [386] = 1,
    ACTIONS(137), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 202,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 238,
  [SMALL_STATE(17)] = 248,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 268,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 298,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 312,
  [SMALL_STATE(25)] = 319,
  [SMALL_STATE(26)] = 326,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 338,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 346,
  [SMALL_STATE(32)] = 350,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 358,
  [SMALL_STATE(35)] = 362,
  [SMALL_STATE(36)] = 366,
  [SMALL_STATE(37)] = 370,
  [SMALL_STATE(38)] = 374,
  [SMALL_STATE(39)] = 378,
  [SMALL_STATE(40)] = 382,
  [SMALL_STATE(41)] = 386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(40),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(39),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_statement, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive_statement, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_string, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_string, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(15),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_category_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_category_repeat1, 2), SHIFT_REPEAT(34),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_category_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yyyymmdd, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmddyyyy, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
