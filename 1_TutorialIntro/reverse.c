#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int mgetline(char line[], int lim);
void reverse(char line[]);

int main(void)
{
   int len;
   char line[MAXLINE];
   
   while ((len=mgetline(line, MAXLINE)) > 0)
   {
      reverse(line);
      printf("%s", line);
   }

   return 0;
}

int mgetline(char s[], int lim)
{
   int i,c;
   for(i=0; i<lim-1 && (c=getchar()) != EOF &&c!='\n'; i++)
   {
      s[i] = c;
   }
   
   if (c=='\n')
   {
      s[i]=c;
      i++;
   }

   return i;
}

void reverse(char arr[])
{
   int i,j;
   char temp;

   for (i=0; arr[i]!='\0';i++)
   {
      ;      
   }
   i--;
   if (arr[i]=='\n')
   {
      i--;
   }   
   j=0;
   while (j<i) 
   {
      temp=arr[j];
      arr[j] = arr[i];
      arr[i]=temp;
      i--;
      j++;
   }
}




