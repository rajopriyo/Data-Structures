#include <stdio.h>
int main()
{
   char s[1000], rev[1000];
   int j, last, i = 0;

   printf("Enter a string = ");
   scanf("%s",s);

   

   while (s[i] != '\0')
      i++;

   last = i - 1;

   for (j = 0; j < i; j++) 
   {
      rev[j] = s[last];
      last--;
   }

   rev[j] = '\0';

   printf("Reverse= %s", rev);

 
}
