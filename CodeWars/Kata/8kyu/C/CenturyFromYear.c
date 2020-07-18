/*
	Instruction

Introduction

The first century spans from the year 1 up to and including the year 100, The second - from the year 101 up to and including the year 200, etc.

Task :

Given a year, return the century it is in.

Input , Output Examples ::

centuryFromYear(1705)  returns (18)
centuryFromYear(1900)  returns (19)
centuryFromYear(1601)  returns (17)
centuryFromYear(2000)  returns (20)
Hope you enjoy it .. Awaiting for Best Practice Codes

Enjoy Learning !!!
*/

/*
	Sample Tests
	
#include <criterion/criterion.h>

int centuryFromYear(int year);

Test(centuryFromYear, FixedTests) 
{
    cr_assert_eq(centuryFromYear(1705), 18);
    cr_assert_eq(centuryFromYear(1900), 19);
    cr_assert_eq(centuryFromYear(1601), 17);
    cr_assert_eq(centuryFromYear(2000), 20);
}
*/
int centuryFromYear(int year) 
{
	int result = 0;
	result = year/100;
	if((year % 100) > 0)
	{
		result += 1;
	}
  	return result ;
}