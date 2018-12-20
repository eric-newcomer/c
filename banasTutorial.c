/* Multiline
comment */

//Single line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Eric Newcomer"

int globalVar = 100;

main()
{
   char firstLetter = 'E';

   //whole nums between -32,768 and +32,768
   int num = 32768;
   
   //bigger nums:
   long int superBigNum = -225523452345;

   float piValue = 3.14159265;

   //bigger than float = double
   double biggerThanFloat = 3.1415926562395723;

   //printf = print to screen
   // \n new line
   // \t tabs
   printf("\n");

   printf("Test\nTest\nTest\n");

   printf("I am %d years old\n", 20);

   printf("Print long int:%ld\n", superBigNum);
   
   printf("Print a float: %.5f\n", piValue);

   printf("Print a double (big float): %.10f\n", biggerThanFloat);
}









