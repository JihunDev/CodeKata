/*
    Instruction

Complete the squareSum/square_sum/SquareSum method so that it squares each number passed into it and then sums the results together.

For example:

const int values[] = { 1, 2, 2 };
const size_t count = sizeof(values)/sizeof(values[0]);

square_sum(values, count); // should return 9
*/

/*
    Sample Tests

#include <criterion/criterion.h>
#include <stddef.h>

int square_sum(const int *values, size_t count);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
  {
    const int values[0];
    int received = square_sum(values, 0);
    int expected = 0;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }

  {
    const int values[] = { 1, 2 };
    int received = square_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 5;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }

  {
    const int values[] = { 0, 3, 4, 5 };
    int received = square_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 50;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }
}
*/
#include <stddef.h>

int square_sum(const int *values, size_t count) {

  int sumResult = 0;
  for(int i=0; i<count; i++) {
    sumResult += values[i] * values[i];
  }

  return sumResult;
}
