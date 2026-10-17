module.exports = grammar({
  name: 'pmf',

  rules: {
    source_file: $ => seq($.positive_statement, repeat("\n"), optional($.data)),

    positive_statement: $ => choice("POSITIVE_GOOD", "POSITIVE_BAD"),

    data: $ => repeat1(seq(
      choice(
	$.transaction,
	$.balance,
      ),
      optional("\n"),
    )),

    transaction: $ => seq(
      $.date,
      $._sep,
      $.amount,
      $._sep,
      $.category,
      $._sep,
      $.rest_of_line_string,
    ),
    // One shared separator token, so that after "date  " the parser can still
    // choose between a transaction's amount and a dated BALANCE.
    _sep: $ => / +/,
    date: $ => choice(
      $.yyyymmdd,
      $.mmddyyyy,
    ),
    yyyymmdd: $ => seq(/\d\d\d\d/, "/", /[01]?\d/, "/", /[0123]?\d/),
    mmddyyyy: $ => seq(/[01]?\d/,"/", /[0123]?\d/, "/", /\d\d\d\d/),

    // USD by default; a ticker after a single space makes it a quantity of
    // that commodity instead, e.g. "5.189 GOOG". In a transaction the ticker
    // must be followed by a space (fields are separated by two or more), so a
    // single-spaced "-120.00 Food" is still dollars. prec: "BALANCE 2026" is
    // an amount, not the start of a date.
    amount: $ => choice(
      token(prec(1, /-?(\d+\.?\d*|\.\d+)/)),
      token(prec(1, /-?(\d+\.?\d*|\.\d+) [A-Z][A-Z0-9]*(\.[A-Z0-9]+)? /)),
    ),
    // A BALANCE ends the line, so its ticker needs nothing after it.
    balance_amount: $ => choice(
      token(prec(1, /-?(\d+\.?\d*|\.\d+)/)),
      token(prec(1, /-?(\d+\.?\d*|\.\d+) [A-Z][A-Z0-9]*(\.[A-Z0-9]+)?/)),
    ),

    rest_of_line_string: $ => choice(
      /[^\n\r]+/,
    ),

    category: $ => seq(
      /(\S+ ?)+/,
      repeat(seq(">", /(\S+ ?)+/)),
    ),

    // "2026/10/16  BALANCE  1234.56" is the account's balance on that date.
    // The undated form is the balance as of the transactions above it.
    balance: $ => seq(
      optional(seq($.date, $._sep)),
      $.balance_str,
      optional($._sep),
      alias($.balance_amount, $.amount),
    ),
    balance_str: $ => "BALANCE",
  }
});
