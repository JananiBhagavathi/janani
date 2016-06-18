#include <stdio.h>

int main()
{
   char str[30],str1[30];
   int n,i;
   gets(str);
   n=strlen(str);
  
   for(i=n;i>=0;i--)
   {
       printf("%c",str[i]);
   }
    return 0;
}
