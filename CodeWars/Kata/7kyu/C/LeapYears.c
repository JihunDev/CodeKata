/*
	Instruction

In this kata you should simply determine, whether a given year is a leap year or not. In case you don't know the rules, here they are:

years divisible by 4 are leap years
but years divisible by 100 are no leap years
but years divisible by 400 are leap years
Additional Notes:

Only valid years (positive integers) will be tested, so you don't have to validate them
Examples can be found in the test fixture.

*/

/*
	Sample Tests
	
#include <criterion/criterion.h>
#include <stdbool.h>

bool IsLeapYear(int);

Test(ExampleTests, should_pass_all_the_tests_provided) {
    cr_assert_eq(IsLeapYear(1234), false);
    cr_assert_eq(IsLeapYear(1984), true);
    cr_assert_eq(IsLeapYear(2000), true);
    cr_assert_eq(IsLeapYear(2010), false);
    cr_assert_eq(IsLeapYear(2013), false);
}
*/

#include <stdbool.h>

bool IsLeapYear(int year) {
  
  if(0 == year % 4 && 0 != year%100 || 0 == year % 400) {
    return true;
  } else {
    return false;
  }
}