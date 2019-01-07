#include <stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 10

int main()
{
   float fahr, cel;
   int lower, upper, step;

   cel = LOWER;;
   
   printf("%10s\t%10s\n", "Celsius", "Fahrenheit");
   while (cel<=UPPER)
   {
      fahr = cel * (9/5) + 32;
      printf("%10.2f\t%10.2f\n", cel, fahr);
      cel += STEP;
   }
   return 0;
}
   
   
