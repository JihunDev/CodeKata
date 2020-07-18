/*
	Instruction

Write function avg which calculates average of numbers in given list.
*/

/*
	Sample Tests
	
#define ARRAY_SIZE(x) (sizeof x / sizeof 0[x] / (size_t) !(sizeof x % sizeof 0[x]))

#include <criterion/criterion.h>

double find_average(double*, int);

Test(example_tests, sohuld_return_average_value) {
  double array[] = { 17, 16, 16, 16, 16, 15, 17, 17, 15, 5, 17, 17, 16 };
  cr_assert_eq(find_average(array, ARRAY_SIZE(array)), 200.0 / 13.0);
}
*/
double find_average(double* array, int length) {
  double sumArr;
  for(int i = 0; i < length; i++) {
  	sumArr += array[i];
  }

  return sumArr / length;
}