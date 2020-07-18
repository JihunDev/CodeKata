/*
    Instruction

    Return the number (count) of vowels in the given string.
    We will consider a, e, i, o, and u as vowels for this Kata.
    The input string will only consist of lower case letters and/or spaces.
*/

/*
    Sample Tests

    // Adapted from the tests originally written by a code warrior jayeshcp and lilsweetcaligua
    #include <criterion/criterion.h>
    #include <stddef.h>

    size_t get_count(const char *s);

    Test(Sample_Test, should_return_the_vowel_count)
    {
        cr_assert_eq(get_count("abracadabra"), 5);
        cr_assert_eq(get_count(""), 0);
    }
*/

#include <stddef.h>

size_t get_count(const char *s)
{
  int c = 0, count = 0;
  char ch[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

  while (s[c] != '\0')
  {
    for(int i = 0; i < 10; i++){
      if(s[c] == ch[i]){
        count++;
      }
    }
    c++;
  }

  return count;
}
