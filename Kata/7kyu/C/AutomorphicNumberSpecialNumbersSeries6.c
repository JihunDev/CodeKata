/*
	Instruction

    Definition

    A number is called Automorphic number if and only if its square ends in the same digits as the number itself.

    Task

    Given a number determine if it Automorphic or not .

    Warm-up (Highly recommended)

    Playing With Numbers Series

    Notes

    The number passed to the function is positive
    Single-digit numbers are considered Automorphic number.
    Input >> Output Examples

    1- autoMorphic (25) -->> return "Automorphic"
    Explanation:

    25 squared is 625 , Ends with the same number's digits which are 25 .
    2- autoMorphic (13) -->> return "Not!!"
    Explanation:

    13 squared is 169 , Not ending with the same number's digits which are 69 .
    3- autoMorphic (76) -->> return "Automorphic"
    Explanation:

    76 squared is 5776 , Ends with the same number's digits which are 76 .
    5- autoMorphic (225) -->> return "Not!!"
    Explanation:

    225 squared is 50625 , Not ending with the same number's digits which are 225 .
    4- autoMorphic (625) -->> return "Automorphic"
    Explanation:

    625 squared is 390625 , Ends with the same number's digits which are 625 .
    6- autoMorphic (1) -->> return "Automorphic"
    Explanation:

    1 squared is 1 , Ends with the same number's digits which are 1 .
    7- autoMorphic (6) -->> return "Automorphic"
    Explanation:

    6 squared is 36 , Ends with the same number's digits which are 6
*/

/*
	Sample Tests

    #include <criterion/criterion.h>

    const char *autoMorphic(int number);

    Test(AutoMorphic, One_Digit_Number)
    {
        cr_assert_str_eq(autoMorphic(1), "Automorphic");
        cr_assert_str_eq(autoMorphic(3), "Not!!");
        cr_assert_str_eq(autoMorphic(6), "Automorphic");
        cr_assert_str_eq(autoMorphic(9), "Not!!");
    }
    Test(AutoMorphic, Two_Digit_Number)
    {
        cr_assert_str_eq(autoMorphic(25), "Automorphic");
        cr_assert_str_eq(autoMorphic(13), "Not!!");
        cr_assert_str_eq(autoMorphic(76), "Automorphic");
        cr_assert_str_eq(autoMorphic(95), "Not!!");
    }
    Test(AutoMorphic, Larger_Number)
    {
        cr_assert_str_eq(autoMorphic(625), "Automorphic");
        cr_assert_str_eq(autoMorphic(225), "Not!!");
        cr_assert_str_eq(autoMorphic(425), "Not!!");
        cr_assert_str_eq(autoMorphic(399), "Not!!");
    }
*/

const char *autoMorphic(int number)
{
    int sq = number * number;

    while (number > 0) {
        if (number % 10 != sq % 10)
        {
            return "Not!!";
        }
        number /= 10;
        sq /= 10;
    }

    return "Automorphic";
}
