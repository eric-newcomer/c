#include <stdio.h>

int main()
{
   float fahr, cel;
   int lower, upper, step;

   lower = 0;
   upper = 100;
   step = 10;

   cel = lower;
   
   printf("%10s\t%10s\n", "Celsius", "Fahrenheit");
   while (cel<=upper)
   {
      fahr = cel * (9/5) + 32;
      printf("%10.2f\t%10.2f\n", cel, fahr);
      cel += step;
   }
   return 0;
}
   
   
