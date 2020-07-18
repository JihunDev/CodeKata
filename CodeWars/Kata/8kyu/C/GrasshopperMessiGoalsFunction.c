/*
Instruction

Messi goals function
Messi is a soccer player with goals in three leagues:

LaLiga
Copa del Rey
Champions
Complete the function to return his total number of goals in all three leagues.

Note: the input will always be valid.

For example:

5, 10, 2  -->  17
*/

/*
Sample Tests

#include <criterion/criterion.h>

int goals(int, int, int);

Test(goals_test, basic_tests) {
  cr_assert_eq(goals(0, 0, 0), 0);
  cr_assert_eq(goals(43, 10, 5), 58);
}
*/

int goals(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals) {
  return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}
