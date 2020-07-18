/*
    Instruction

Return the Nth Even Number

nthEven(1) //=> 0, the first even number is 0
nthEven(3) //=> 4, the 3rd even number is 4 (0, 2, 4)

nthEven(100) //=> 198
nthEven(1298734) //=> 2597466

The input will not be 0.
*/

/*
    Sample Tests

#include <criterion/criterion.h>

int nth_even(int n);

// Basic test

Test(nth_even, should_pass_some_example_test_cases){

  cr_assert(nth_even(1) == 0);
  cr_assert(nth_even(3) == 4);
  cr_assert(nth_even(100) == 198);
  cr_assert(nth_even(1298734) == 2597466);

}
*/

int nth_even(int n){
   int number = 0;

   if(n == 1){
     return number;
   }

   number = (n * 2) - 2;

   return number;
}
