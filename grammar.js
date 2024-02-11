module.exports = grammar({
  name: 'pmf',

  rules: {
    source_file: $ => seq($.positive_statement, repeat("\n"), optional($.data)),

    positive_statement: $ => choice("POSITIVE_GOOD", "POSITIVE_BAD"),

    data: $ => repeat1(seq(
      $.line,
      optional("\n"),
    )),

    line: $ => seq(
      $.date,
      repeat1(" "),
      $.amount,
      repeat1(" "),
      $.category,
      repeat1(" "),
      $.rest_of_line_string,
    ),
    date: $ => choice(
      $.yyyymmdd,
      $.mmddyyyy,
    ),
    yyyymmdd: $ => seq(/\d\d\d\d/, "/", /[01]?\d/, "/", /[0123]?\d/),
    mmddyyyy: $ => seq(/[01]?\d/,"/", /[0123]?\d/, "/", /\d\d\d\d/),

    amount: $ => /-?\d*\.?\d?\d?/,

    rest_of_line_string: $ => choice(
      /[^\n\r]+/,
    ),

    category: $ => seq(
      /(\S+ ?)+/,
      repeat(seq(">", /(\S+ ?)+/)),
    ),
  }
});
