/*
    Instruction

Your task is to create a function that does four basic mathematical operations.

The function should take three arguments - operation(string/char), value1(number), value2(number).
The function should return result of numbers after applying the chosen operation.

Examples:

basicOp('+', 4, 7)         // Output: 11
basicOp('-', 15, 18)       // Output: -3
basicOp('*', 5, 5)         // Output: 25
basicOp('/', 49, 7)        // Output: 7
*/
/*
    Sample Tests

// adapted from the tests originally written by a code warrior Quickz

#include <criterion/criterion.h>

int basic_op(char op, int value1, int value2);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
  cr_assert_eq(basic_op('+', 4, 7), 11);
  cr_assert_eq(basic_op('-', 15, 18), -3);
  cr_assert_eq(basic_op('*', 5, 5), 25);
  cr_assert_eq(basic_op('/', 49, 7), 7);
}
*/
int basic_op(char op, int value1, int value2) {

  switch(op){
    case '+' :
      return value1 + value2;
    case '-' :
      return value1 - value2;
    case '*' :
      return value1 * value2;
    case '/' :
      return value1 / value2;

  }  
}
