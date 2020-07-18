/*
	Instruction

Personalized greeting

Create a function that gives a personalized greeting. This function takes two parameters: name and owner.

Use conditionals to return the proper message:

======= case | return --- | --- name equals owner | 'Hello boss' otherwise | 'Hello guest'
*/

/*
	Sample Tests
	
/* Adapted from the test cases originally written by a code warrior - danleavitt0. */

#include <criterion/criterion.h>

const char* greet(const char *name, const char *owner);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    cr_assert_str_eq(greet("Daniel", "Daniel"), "Hello boss");
    cr_assert_str_eq(greet("Greg", "Daniel"), "Hello guest");
    static const char danielToo[] = "Daniel";
    cr_assert_str_eq(greet(danielToo, "Daniel"), "Hello boss");
    cr_assert_str_eq(greet("Cat", "Catherine"), "Hello guest", "Cat is not Catherine");
    cr_assert_str_eq(greet("Catherine", "Cat"), "Hello guest", "Caterine is not Cat");
}
*/

#include <string.h>

const char* greet(const char *name, const char *owner) {
  if(strcmp(name, owner) == 0){
    return "Hello boss";
  } else {
    return "Hello guest";
  }
}