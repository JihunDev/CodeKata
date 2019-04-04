/*
    Instruction

Task

Given a Divisor and a Bound , Find the largest integer N , Such That ,

Conditions :

N is divisible by divisor
N is less than or equal to bound
N is greater than 0.
Notes

The parameters (divisor, bound) passed to the function are only positve values .
It's guaranteed that a divisor is Found .
Input >> Output Examples

1- maxMultiple (2,7) ==> return (6)
Explanation:

(6) is divisible by (2) , (6) is less than or equal to bound (7) , and (6) is > 0 .

2- maxMultiple (10,50)  ==> return (50)
Explanation:

(50) is divisible by (10) , (50) is less than or equal to bound (50) , and (50) is > 0 .*

3- maxMultiple (37,200) ==> return (185)
Explanation:

(185) is divisible by (37) , (185) is less than or equal to bound (200) , and (185) is > 0 .

Playing with Numbers Series

Playing With Lists/Arrays Series

For More Enjoyable Katas

ALL translations are welcomed

Enjoy Learning !!

Zizou

*/

/*
    Sample Tests
#include <criterion/criterion.h>

int maxMultiple(int divisor, int bound);

Test(Maximum_Multiple, Check_Small_Positives)
{
    cr_assert_eq(maxMultiple(2,7),   6);
    cr_assert_eq(maxMultiple(3,10),  9);
    cr_assert_eq(maxMultiple(7,17), 14);
}
Test(Maximum_Multiple, Larger_Positives)
{
    cr_assert_eq(maxMultiple(10,50),   50);
    cr_assert_eq(maxMultiple(37,200), 185);
    cr_assert_eq(maxMultiple(7,100),   98);
}
*/

int maxMultiple(int divisor, int bound)
{
    int result = 0;
    for(int i=0; (divisor*i)<=bound; i++) {
      result = divisor * i;
    }

    return result;; // Do your magic!
}
