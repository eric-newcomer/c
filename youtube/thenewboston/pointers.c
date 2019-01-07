#include <stdio.h>

int main()
{
   int tuna = 23;
   
   printf("Address \t Name \t Value \t\n");

   printf("%p \t %s \t %d\n", &tuna, "tuna", tuna);
   
   int * pTuna = &tuna;

   printf("%p \t %s \t %d \t\n", pTuna, "tuna", tuna);
   
   return 0;
}
