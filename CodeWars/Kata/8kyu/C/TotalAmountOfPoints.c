/*
    Instruction

    Our football team finished the championship. The result of each match look like "x:y". Results of all matches are recorded in the array.

    For example: ["3:1", "2:2", "0:1", ...]

    Write a function that takes such list and counts the points of our team in the championship. Rules for counting points for each match:

    if x>y - 3 points
    if x<y - 0 point
    if x=y - 1 point
    Notes:

    there are 10 matches in the championship
    0 <= x <= 4
    0 <= y <= 4
*/

/*
    Sample Tests

    #include <criterion/criterion.h>
    #include <stdlib.h>

    int points(int* games);

    Test(Sample_Cases, should_pass_all_the_tests_provided) {
        char* games1[] = {"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"};
        verify_fixed(points(games1), 30);
        char* games2[] = {"1:1","2:2","3:3","4:4","2:2","3:3","4:4","3:3","4:4","4:4"};
        verify_fixed(points(games2), 10);
        char* games3[] = {"0:1","0:2","0:3","0:4","1:2","1:3","1:4","2:3","2:4","3:4"};
        verify_fixed(points(games3), 0);
        char* games4[] = {"1:0","2:0","3:0","4:0","2:1","1:3","1:4","2:3","2:4","3:4"};
        verify_fixed(points(games4), 15);
        char* games5[] = {"1:0","2:0","3:0","4:4","2:2","3:3","1:4","2:3","2:4","3:4"};
        verify_fixed(points(games5), 12);
    }
*/

#include <stdio.h>
#include <stdlib.h>

int points(char* games[]) {
  int count  = 0;

  for(int i = 0; i < 10; i++)
  {
    if(games[i][0] > games[i][2]){
      count += 3;
    }
    if(games[i][0] == games[i][2]){
      count += 1;
    }
  }

  return count;
}
