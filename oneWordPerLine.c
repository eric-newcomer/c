#include <stdio.h>

main()
{
   char c;
   c = getchar();
   while (c != EOF)
   {
      if (c == ' ')
      {
         putchar('\n');
      }
      else{
         putchar(c);
      }
      c = getchar();
   }
}
