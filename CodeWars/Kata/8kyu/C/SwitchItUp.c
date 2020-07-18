/*
    Instruction

When provided with a number between 0-9, return it in words.

Input :: 1

Output :: "One".

Try using "Switch" statements.

This kata is meant for beginners. Rank and upvote to bring it out of beta
*/

/*
    Sample Tests

#include <criterion/criterion.h>

char* switchItUp(int);

Test(basicTests, should_pass_all_the_tests_provided) {
    cr_assert_str_eq(switchItUp(1), "One");
    cr_assert_str_eq(switchItUp(3), "Three");
    cr_assert_str_eq(switchItUp(5), "Five");
}
*/
char* switchItUp(int number)
{
  switch(number){
    case 1 :
      return "One";
    case 2 :
      return "Two";
    case 3 :
      return "Three";
    case 4 :
      return "Four";
    case 5 :
      return "Five";
    case 6 :
      return "Six";
    case 7 :
      return "Seven";
    case 8 :
      return "Eight";
    case 9 :
      return "Nine";
    case 0 :
      return "Zero";
  }
}
