/*
    Instruction

    You are given two angles (in degrees) of a triangle.

    Write a function to return the 3rd.

    Note: only positive integers will be tested.

*/

/*
    Sample Tests

    #include <criterion/criterion.h>

    int other_angle(int a, int b);
    void tester(int a, int b, int c);

    Test(Sample_Cases, should_pass_these_four_tests) {

        tester(30,  60,  90);
        tester(60,  60,  60);
        tester(43,  78,  59);
        tester(10,  20, 150);

    }

*/

int other_angle(int a, int b) {

    //  <----  hajime!
    return 180 - (a + b);
}
