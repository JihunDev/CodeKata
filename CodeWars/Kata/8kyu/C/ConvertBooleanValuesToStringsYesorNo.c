/*
	Instruction

Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>

const char* bool_to_word (int value);

Test (Bool_to_word, should_pass_all_the_tests_provided) {
    cr_assert_eq (bool_to_word (0!=0), "No");
    cr_assert_eq (bool_to_word (0==0), "Yes");
}
*/
const char *bool_to_word (int value) {

	if(value != 0){
		return "Yes";
	} else {
		return "No";
	}

}