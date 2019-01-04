#include <stdio.h>

int main()
{
   while (1)
   {
      int i;

      printf("Enter number of days: ");
      scanf("%d", &i);

      int years = i / 365;
      int weeks = (i % 365)/7;
      int days = (i%365) % 7;
   
      printf("Years: %d\n", years);   
      printf("Weeks: %d\n", weeks);   
      printf("Days:  %d\n", days);   
   }
   return 0;
}
