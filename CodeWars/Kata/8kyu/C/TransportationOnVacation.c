/*
    Instruction

After a hard quarter in the office you decide to get some rest on a vacation. So you will book a flight for you and your girlfriend and try to leave all the mess behind you.
You will need a rental car in order for you to get around in your vacation. The manager of the car rental makes you some good offers.
Every day you rent the car costs $40. If you rent the car for 7 or more days, you get $50 off your total. Alternatively, if you rent the car for 3 or more days, you get $20 off your total.
Write a code that gives out the total amount for different days(d).
*/

/*
    Sample Tests

#include <criterion/criterion.h>

unsigned rental_car_cost(unsigned d);

Test(Sample_Test, should_return_the_cost_for_rental)
{
    cr_assert_eq(rental_car_cost(1u), 40u);
    cr_assert_eq(rental_car_cost(2u), 80u);
    cr_assert_eq(rental_car_cost(5u), 180u);
    cr_assert_eq(rental_car_cost(9u), 310u);
    cr_assert_eq(rental_car_cost(0u), 0u);
}
*/

/* d - the days to rent */
unsigned rental_car_cost(unsigned d)
{
    if(d < 3) {
      return (d * 40);
    } else if(d >= 3 && d <= 6) {
      return (d * 40) - 20;
    } else if(d >= 7) {
      return (d * 40) - 50;
    }
}
