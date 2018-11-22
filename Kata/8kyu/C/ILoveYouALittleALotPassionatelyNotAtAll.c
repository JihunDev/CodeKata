/*
	Instruction

  Who remembers back to their time in the schoolyard, when girls would take a flower and tear its petals, saying each of the following phrases each time a petal was torn:

  I love you
  a little
  a lot
  passionately
  madly
  not at all
  When the last petal was torn there were cries of excitement, dreams, surging thoughts and emotions.

  Your goal in this kata is to determine which phrase the girls would say for a flower of a given number of petals, where nb_petals > 0.
*/

/*
	Sample Tests

  // Adapted from the tests originally written by a code warrior - nbeck.

  #include <criterion/criterion.h>

  const char* how_much_i_love_you(int nb_petals);

  Test(CoreTests, ShouldPassAllTheTestsProvided) {
      cr_assert(strcmp(how_much_i_love_you(7), "I love you") == 0);
      cr_assert(strcmp(how_much_i_love_you(3), "a lot") == 0);
      cr_assert(strcmp(how_much_i_love_you(6), "not at all") == 0);
  }
*/
#include <stddef.h> // NULL

const char* how_much_i_love_you(int nb_petals) {
  int petal;

  if(nb_petals >= 7) {
    petal = nb_petals % 6;
  } else {
    petal = nb_petals;
  }

  switch (petal) {
    case 0:
  		return "not at all";

    case 1:
  		return "I love you";

  	case 2:
  		return "a little";

  	case 3:
  		return "a lot";

  	case 4:
  		return "passionately";

  	case 5:
  		return "madly";

  	case 6:
  		return "not at all";
  }
}
