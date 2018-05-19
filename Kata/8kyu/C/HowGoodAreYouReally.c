/*
	Instruction

There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. 
You want to know if you're better than the average student in your class.
You got an array with your colleges' points. 
Now calculate the average to your points!

Return True if you're better, else False!

Note:

Your points are not included in the array of your classes points. 
For calculating the average point you may add your point to the given array!
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>

int better_than_average(int *, int, int);

Test(better_than_average, ex_tests) {
  int cp1[] = {2, 3};
  int cp2[] = {100, 40, 34, 57, 29, 72, 57, 88};
  int cp3[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
  cr_assert(better_than_average(cp1, 2, 5));
  cr_assert(better_than_average(cp2, 8, 75));
  cr_assert_not(better_than_average(cp3, 9, 9));
}
*/
int better_than_average(int class_points[], int class_size, int your_points) {
    int temp = 0, age = 0;

    for(int i = 0; i < class_size; i++){
        temp += class_points[i];
    }
    age = temp/class_size;
    
    return  your_points > age;
}