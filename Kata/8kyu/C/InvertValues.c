/*
	Instruction

Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
invert([]) == []
Notes:

All values are greater than INT_MIN
The input should be modified, not returned.
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>

void test_invert(int *values, size_t values_size, int *expected);

Test(invert, should_pass_some_example_tests)
{
    {
        int values[] = {1, 2, 3, 4, 5};
        int expected[]  = {-1, -2, -3, -4, -5};        
        test_invert(values, 5, expected);
    }
    {
        int values[] = {1, -2, 3, -4, 5};
        int expected[]  = {-1, 2, -3, 4, -5};
        test_invert(values, 5, expected);
    }
    {
        test_invert(NULL, 0, NULL);
    }
}
*/

#include <stddef.h>

void invert(int *values, size_t values_size)
{
  for(int i = 0; i < values_size; i++) {
    values[i] = values[i] * -1;
  }
}