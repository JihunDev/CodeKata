/*
	Instruction

Very simple, given a number, find its opposite.

Examples:

1: -1
14: -14
-34: 34
But can you do it in 1 line of code and without any conditionals?
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>

float opposite(float);

Test(basic_tests, should_pass_all_the_tests_provided) {
    cr_assert_eq(opposite(-1), 1);
    cr_expect_eq(opposite(14), -14); 
    cr_assert_eq(opposite(-34), 34);   
}
*/
float opposite(float num) {
	return num * (-1);
}