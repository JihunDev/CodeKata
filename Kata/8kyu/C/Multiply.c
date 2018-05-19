/*
	Instruction

The code does not execute properly. Try to figure out why.
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>
int multiply(int, int);

Test(ExampleTests, should_pass_all_the_tests_provided) {
    cr_assert_eq(multiply(5, 6), 30);
    cr_assert_eq(multiply(12, 12), 144);
}
*/
int multiply(int a, char *b) {
  return a * (int)b;
}