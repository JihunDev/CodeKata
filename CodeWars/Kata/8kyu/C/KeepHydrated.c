/*
    Instruction

    Nathan loves cycling.

    Because Nathan knows it is important to stay hydrated, he drinks 0.5 litres of water per hour of cycling.

    You get given the time in hours and you need to return the number of litres Nathan will drink, rounded to the smallest value.

    For example:

    time = 3 ----> litres = 1

    time = 6.7---> litres = 3

    time = 11.8--> litres = 5
*/
/*
    Sample Tests

    #include <criterion/criterion.h>

    int Liters(double);

    Test(ExampleTests, should_pass_all_the_tests_provided) {
        cr_assert_eq(Liters(2), 1);
        cr_assert_eq(Liters(1.4), 0);
        cr_assert_eq(Liters(12.3), 6);
        cr_assert_eq(Liters(11.8), 5);
    }
*/

int Liters(double time) {
  return time/2;
}
