#include <stdio.h>
#include<string.h>
int main()
{
   char num[100];
   int n,dec=0,i;
   gets(num);
   n=strlen(num);
   for(i=0;i<n;i++)
   {
       dec=dec*10+(num[i]-'0');
   }
   printf("%d",dec);
    return 0;
}
