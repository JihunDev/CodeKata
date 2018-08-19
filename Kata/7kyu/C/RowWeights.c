/*
    Instruction

Scenario

Several people are standing in a row divided into two teams.
The first person goes into team 1, the second goes into team 2, the third goes into team 1, and so on.

Task

Given an array of positive integers (the weights of the people), return a new array/tuple of two integers, where the first one is the total weight of team 1, and the second one is the total weight of team 2.

Notes

Array size is at least 1.
All numbers will be positive.
Input >> Output Examples

1- rowWeights([13, 27, 49])  ==>  return (62, 27)
Explanation:

The first element 62 is the total weight of team 1, and the second element 27 is the total weight of team 2.

2- rowWeights([50, 60, 70, 80])  ==>  return (120, 140)
Explanation:

The first element 120 is the total weight of team 1, and the second element 140 is the total weight of team 2.

3- rowWeights([80])  ==>  return (80, 0)
Explanation:

The first element 80 is the total weight of team 1, and the second element 0 is the total weight of team 2.


*/

/*
    Sample Tests
#include <criterion/criterion.h>

void rowWeights(const int weights[], int count, int teams[]);
void doTest(const int weights[], int count, int expected[]);

#define RUN_TEST(arr,exp) doTest((arr), sizeof(arr)/sizeof((arr)[0]), (exp));

Test(Row_Weights, Basic_Tests)
{
    {
        int arr[] = {80},
            exp[] = {80,0};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {100,50},
            exp[] = {100,50};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {50,60,70,80},
            exp[] = {120,140};
        RUN_TEST(arr, exp);
    }
}
Test(Row_Weights, Odd_Vector_Length)
{
    {
        int arr[] = {13,27,49},
            exp[] = {62,27};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {70,58,75,34,91},
            exp[] = {236,92};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {29,83,67,53,19,28,96},
            exp[] = {211,164};
        RUN_TEST(arr, exp);
    }
}
Test(Row_Weights, Even_Vector_Length)
{
    {
        int arr[] = {100,50},
            exp[] = {100,50};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {100,51,50,100},
            exp[] = {150,151};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {39,84,74,18,59,72,35,61},
            exp[] = {207,235};
        RUN_TEST(arr, exp);
    }
}
void doTest(const int weights[], int count, int expected[])
{
    int teams[2] = { 0 };
    rowWeights(weights, count, teams);
    cr_assert_eq(teams[0], expected[0], "Team 1: expected %d, but received %d", expected[0], teams[0]);
    cr_assert_eq(teams[1], expected[1], "Team 2: expected %d, but received %d", expected[1], teams[1]);
}
*/
void rowWeights(const int weights[], int count, int teams[])
{
    // Do your magic!
    for(int i=0; i<count; i++) {
      if(count == 1){
        teams[0] = weights[0];
        teams[1] = 0;
        break;
      }
      if(i%2 == 0){
        teams[0] += weights[i];
      } else {
        teams[1] += weights[i];
      }
    }
}
