/* Multiline
comment */

//Single line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Eric Newcomer"

int globalVar = 100;

main()
{
   //Scanf examples
   char middleInitial = 'J';

   printf("What's your middle name? ");

   scanf(" %c", &middleInitial);

   printf("Your middle initial is %c\n", middleInitial);

   char firstName[30], lastName[30];

   printf("What is your first and last name? ");

   scanf(" %s %s", firstName, lastName);

   printf("Your name is %s %c %s\n", firstName, middleInitial, 
   lastName);

   int month, day, year;
   printf("What's your birthdate? \n");

   scanf(" %d/%d/%d", &month, &day, &year);  

   printf("\nYou were born on %d/%d/%d", month, day, year);

}









