/*
    Instruction

Two red beads are placed between every two blue beads. There are N blue beads. After looking at the arrangement below work out the number of red beads.

@ @@ @ @@ @ @@ @ @@ @ @@ @

Implement count_red_beads(N_blue) (in PHP count_red_beads($n); in Java, Javascript countRedBeads(n)) so that it returns the number of red beads.
If there are less than 2 blue beads return 0.

*/

/*
    Sample Tests
// TODO: Replace examples and use TDD development by writing your own tests. The code provided here is just a how-to example.

#include <criterion/criterion.h>

// replace with the actual method being tested
int countRedBeads(int);

Test(the_multiply_function, should_pass_all_the_tests_provided) {
    cr_assert_eq(countRedBeads(0), 0);
    cr_assert_eq(countRedBeads(1), 0);
    cr_assert_eq(countRedBeads(3), 4);
    cr_assert_eq(countRedBeads(5), 8);
}
*/

int countRedBeads(n) {
  //Your code here

  int result = 0;

  if(n < 2) {
    return result;
  } else {
    result = (n * 2) - 2;
    return result;
  }
}
