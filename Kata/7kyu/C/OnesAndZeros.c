/*
    Instruction

    Given an array of one's and zero's convert the equivalent binary value to an integer.

    Eg: [0, 0, 0, 1] is treated as 0001 which is the binary representation of 1.

    Examples:

    Testing: [0, 0, 0, 1] ==> 1
    Testing: [0, 0, 1, 0] ==> 2
    Testing: [0, 1, 0, 1] ==> 5
    Testing: [1, 0, 0, 1] ==> 9
    Testing: [0, 0, 1, 0] ==> 2
    Testing: [0, 1, 1, 0] ==> 6
    Testing: [1, 1, 1, 1] ==> 15
    Testing: [1, 0, 1, 1] ==> 11
    However, the arrays can have varying lengths, not just limited to 4.
*/

/*
    Sample Tests

    #include <criterion/criterion.h>

    unsigned binary_array_to_numbers(unsigned *bits, size_t count);

    Test(ExampleTests, ShouldPassAllTheTestsProvided) {
      {
        unsigned bits[] = { 0,0,0,1 };
        unsigned received = binary_array_to_numbers(bits, sizeof(bits)/sizeof(bits[0]));
        unsigned expected = 1;
        cr_assert_eq(expected, received, "Expected: %zd Received: %zd", expected, received);
      }

      {
        unsigned bits[] = { 0,0,1,0 };
        unsigned received = binary_array_to_numbers(bits, sizeof(bits)/sizeof(bits[0]));
        unsigned expected = 2;
        cr_assert_eq(expected, received, "Expected: %zd Received: %zd", expected, received);
      }

      {
        unsigned bits[] = { 1,1,1,1 };
        unsigned received = binary_array_to_numbers(bits, sizeof(bits)/sizeof(bits[0]));
        unsigned expected = 15;
        cr_assert_eq(expected, received, "Expected: %zd Received: %zd", expected, received);
      }

      {
        unsigned bits[] = { 0,1,1,0 };
        unsigned received = binary_array_to_numbers(bits, sizeof(bits)/sizeof(bits[0]));
        unsigned expected = 6;
        cr_assert_eq(expected, received, "Expected: %zd Received: %zd", expected, received);
      }
    }
*/

#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count) {
  int value = 0;
  int bitNumber = 1;
  for (int i = count-1; i >= 0; i--) {
    if(bits[i] != 0) {
      value += bitNumber;
    }
   bitNumber = bitNumber * 2;
  }
  return value;
}
