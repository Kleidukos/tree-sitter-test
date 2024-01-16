module.exports = grammar({
  name: "cases",
  rules: {

    source_file: $ => repeat(choice(
        $.simple_expression,
        $.case_expression
    )),

    identifier: $ => /[a-z_\d]+/,
    constructor: $ => /[A-Z][A-Za-z0-9]+/,

    simple_expression: $ => choice(
      $.identifier,
      $.binary_operation,
    ),

    binary_operation: $ => choice(
      prec.left(1, seq($.simple_expression, "+", $.simple_expression)),
      prec.left(2, seq($.simple_expression, "-", $.simple_expression)),
      prec.left(3, seq($.simple_expression, "*", $.simple_expression)),
      prec.left(4, seq($.simple_expression, "/", $.simple_expression)),
    ),

    case_expression: $ => prec.right(2,seq(
      "case ",
      field("conditional", $.simple_expression),
      " of",
      field("alternatives", repeat1($.alternatives))
    )),

    alternatives: $ => prec.right(seq(
      "|",
      sep1("|", $.alternative),
    )),

    alternative: $ => seq(
      field("pattern", $.constructor),
      "->",
      field("rhs", $.simple_expression),
    ),
  },
});

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}
