#include <stdio.h>

main()
{
   int c, i, white, other;
   int digits[10];
   
   white=other=0;
   //initializing list to be full of zeros
   for (i=0;i<10;i++) {
      digits[i] = 0;
   }
   
   while ((c=getchar()) != EOF) {
      if (c >= '0' && c <= '9')
         digits[c-'0']++;
      else if (c == ' ' || c == '\n' || c == '\t')
         white++;
      else
         other++;
   }
   printf("Digits = ");
   for (i = 0;i<10;i++)
      printf(" %d", digits[i]);
   printf(", whitespace = %d, other = %d\n", white, other);

}
