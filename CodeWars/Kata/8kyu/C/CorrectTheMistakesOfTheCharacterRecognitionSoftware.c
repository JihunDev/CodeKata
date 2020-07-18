/*
	Instruction

    Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.

    When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.

    Your task is correct the errors in the digitised text. You only have to handle the following mistakes:

    S is misinterpreted as 5
    O is misinterpreted as 0
    I is misinterpreted as 1
    The test cases contain numbers only by mistake.
*/

/*
	Sample Tests
	
    #include <criterion/criterion.h>

    char *correct(char*);

    Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    {
        char source[] = "L0ND0N";
        cr_assert_str_eq(correct(source),"LONDON");
    }
    
    {
        char source[] = "DUBL1N";
        cr_assert_str_eq(correct(source),"DUBLIN");
    }
    
    {
        char source[] = "51NGAP0RE";
        cr_assert_str_eq(correct(source),"SINGAPORE");
    }
    
    {
        char source[] = "BUDAPE5T";
        cr_assert_str_eq(correct(source),"BUDAPEST");
    }
        
    {
        char source[] = "PAR15";
        cr_assert_str_eq(correct(source),"PARIS");
    }
    }
*/

char *correct(char *string);
/* Please modify the string in-place and return it. */
 
char *correct(char *string)
{
  int length = strlen(string);

  printf("length : %d\n", length);
  printf("string : %s\n", string);
  
  for(int i = 0; i < length; i++)
  {
    //printf("1st %c\n", string[i]);
    switch (string[i]) 
    {
      case '5' : 
        string[i] = 'S'; 
        break;
      
      case '0' : 
        string[i] = 'O'; 
        break;
      
      case '1' : 
        string[i] = 'I'; 
        break;
      
      default : 
        break;
    }
  }
  printf("2nd %s\n", string);
  
  return string;
}