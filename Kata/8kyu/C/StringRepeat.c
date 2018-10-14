/*
    Instruction

Write a function called repeatStr which repeats the given string string exactly n times.

repeatStr(6, "I") // "IIIIII"
repeatStr(5, "Hello") // "HelloHelloHelloHelloHello"
*/

/*
    Sample Tests

// Adapted from the tests originally written by a code warrior wichu

#include <criterion/criterion.h>
#include <string.h>

char *repeat_str(size_t count, const char *src);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
  {
    size_t count = 4;
    const char *str = "a";
    char *result = repeat_str(count, str);
    cr_assert(strcmp(result, "aaaa") == 0);
    free(result);
  }
  
  {
    size_t count = 3;
    const char *str = "hello ";
    char *result = repeat_str(count, str);
    cr_assert(strcmp(result, "hello hello hello ") == 0);
    free(result);
  }
  
  {
    size_t count = 2;
    const char *str = "abc";
    char *result = repeat_str(count, str);
    cr_assert(strcmp(result, "abcabc") == 0);
    free(result);
  }
}
*/

#include <string.h>

char *repeat_str(size_t count, const char *src) {
  size_t slen = strlen(src);
  char * dest = malloc(count*slen+1);
 
  int i; char * p;
  for ( i=0, p = dest; i < count; ++i, p += slen ) {
    memcpy(p, src, slen);
  }
  *p = '\0';
  return dest;
}