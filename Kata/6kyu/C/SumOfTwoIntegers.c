/*
    Instruction

    Task

    Given Two intgers a , b , find The sum of them , BUT You are not allowed to use the operators + and -

    Notes

    The numbers (a,b) may be positive , negative values or zeros .
    Returning value will be integer .
    Javascript: the Array reduce methods are disabled, along with eval, require, and module .
    Java: the following methods are prohibited: addExact, average, collect, decrement, increment, nextAfter, nextDown, nextUp, reduce, subtractExact, sum, summing . The following classes are prohibited: BigDecimal and BigInteger .
    NASM: the following instructions are prohibited: add, adc, adcx, adox, dec, inc, lea, sbb, sub .
    Input >> Output Examples

    1- Add (5,19) ==> return (24)

    2- Add (-27,18) ==> return (-9)

    3- Add (-14,-16) ==> return (-30)
*/

/*
    Sample Tests

    #include <criterion/criterion.h>

    int add(int x, int y);

    Test(Sum_Two_Intgers, Check_Positive_Values)
    {
        cr_assert_eq(add(1,2), 3);
        cr_assert_eq(add(5,19), 24);
        cr_assert_eq(add(23,17), 40);
    }
    Test(Sum_Two_Intgers, Check_Negative_Values)
    {
        cr_assert_eq(add(-14,-16), -30);
        cr_assert_eq(add(-50,-176), -226);
        cr_assert_eq(add(-10,-29), -39);
    }
    Test(Sum_Two_Intgers, Check_Mixture_Values)
    {
        cr_assert_eq(add(-13,13), 0);
        cr_assert_eq(add(-27,18), -9);
        cr_assert_eq(add(-90,30), -60);
    }
*/

int add(int x, int y)
{
    int i, j = 1;
    while(j)
    {
        i = x^y;
        j = x&y;
        j = j<<1;
        x = i;
        y = j;
    }
    return x;
}    
