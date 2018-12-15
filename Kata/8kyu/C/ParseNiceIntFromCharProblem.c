/*
	Instruction

    Ask a small girl - "How old are you?". She always says strange things... Lets help her!
    For correct answer program should return int from 0 to 9.
    Assume test input string always valid and may look like "1 year old" or "5 years old", etc.. The first char is number only.
*/

/*
	Sample Tests

    #include <criterion/criterion.h>

    int getAge(const char *inputString);

    Test(getAge, should_pass_some_example_test_cases)
    {
        cr_assert_eq(getAge("5 years old"), 5);
        cr_assert_eq(getAge("9 years old"), 9);
        cr_assert_eq(getAge("1 year old"), 1);
    }
*/

int getAge(const char *inputString)
{
    // return correct age (int). Happy coding :)
    int Age = inputString[0] - 48;
    return Age;
}
