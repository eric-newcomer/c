#include <stdio.h>
#define TABSTOP 4

int main(void)
{
   int n, pos, c;

   n = 0;
   pos = 1;
   
   while ((c = getchar()) != EOF)
   {
      if (c == '\t')
      {
         n = TABSTOP - ((pos-1) % TABSTOP);
      
         while (n > 0)
         {
            putchar('@');
            pos++;
            --n;
         }
      }
      else if (c == '\n')
      {
         putchar(c);
         pos = 1;
      }
      else 
      {
         putchar(c);
         pos++;
      }
   }
   return 0;
}
