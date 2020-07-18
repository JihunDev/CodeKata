/*
    Instruction
It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the original string. You don't have to worry with strings with less than two characters.
*/
/*
    Sample Tests
#include <criterion/criterion.h>
#include <string.h>
#include <stdlib.h>

char* remove_char(char*, const char*);

int i;
char* strings[] = {"eloquent", "country", "person", "place", "ok"};
char* expected[] = {"loquen", "ountr", "erso", "lac", ""};
char* buffer;

Test(basic_tests, should_pass_all_the_tests_provided) {
    for(i=0; i<sizeof(strings)/sizeof(char*); i++) {
        const size_t buffer_size = strlen(strings[i]) + 1;
        buffer = (char*) malloc(buffer_size);
        memset(buffer, '#', buffer_size);
        cr_assert_str_eq(remove_char(buffer, strings[i]), expected[i]);
        free(buffer);
    }
}
*/
char* remove_char(char* dst, const char* src)
{    
    /* your solution should return the string even if you use dst */
    int len = strlen(src);
    
    if(len > 0)
      strcpy(dst, ++src);
      
    if(len > 1)
      dst[len - 2] = '\0';
      
    return dst;
}
