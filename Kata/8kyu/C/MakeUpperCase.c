/*
	Instruction

Write function makeUpperCase.
*/

/*
	Sample Tests
	
#include <string.h>
#include <criterion/criterion.h>

char *makeUpperCase (char *string);

Test(The_makeUpperCase_function, should_pass_all_the_tests_provided) {
      cr_assert (!strcmp (makeUpperCase (strdup ("hello")), "HELLO"));
}
*/
char *makeUpperCase (char *string)
{	
  	for (int i = 0; i < strlen(string); ++i)
  	{
  		if(string[i] >= 97 && string[i] <= 122) {
  			string[i] = string[i] - 32;
  		} 
  	}

  	return string;
}

