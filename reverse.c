#include <stdio.h>
#include <string.h>

int main()
{
   char arr[100];
   
   printf("Enter a string to reverse");
   reverse(arr);
   return 0;
}

void reverse(char arr[])
{
   gets(arr);
   strrev(arr);
   printf("Reverse: %s\n", arr);
}
