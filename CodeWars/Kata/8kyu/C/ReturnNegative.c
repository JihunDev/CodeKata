/*
	Instruction

In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?

Example:

makeNegative(1); // return -1
makeNegative(-5); // return -5
makeNegative(0); // return 0
Notes:

The number can be negative already, in which case no change is required.
Zero (0) is not checked for any specific sign. Negative zeros make no mathematical sense.
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>

int makeNegative(int);

Test(make_negative_algorithm, should_handle_positive_test) 
{
   cr_assert_eq(makeNegative(42), -42);
}
*/

int makeNegative(int num)
{
  if(num == 0){
   return num; 
  }
  
  if(num > 0){
    return num - num * 2;
  }
    return num;
}