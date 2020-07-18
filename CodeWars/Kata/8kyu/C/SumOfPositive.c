/*
	Instruction

You get an array of numbers, return the sum of all of the positives ones.

Example [1,-4,7,12] => 1 + 7 + 12 = 20

Note: array may be empty, in this case return 0.
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>
#include <stddef.h>

int positive_sum(const int *values, size_t count);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
  {
    const int values[] = { 1,2,3,4,5 };
    int received = positive_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 15;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }
  
  {
    const int values[] = { 1,-2,3,4,5 };
    int received = positive_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 13;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }
  
  {
    const int values[] = { -1,2,3,4,-5 };
    int received = positive_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 9;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }
  
  {
    const int values[] = { -1,-2,-3,-4,-5 };
    int received = positive_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 0;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }
}
*/
#include <stddef.h>

int positive_sum(const int *values, size_t count) {
  int sum = 0;
  
  for(int i = 0; i < count; i++){
    if(values[i] > 0){
      sum += values[i];
    }
  }

  return sum;
}