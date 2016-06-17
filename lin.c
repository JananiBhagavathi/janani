#include <stdio.h>
int main()
{
   char a[100];
   int i,count=0;
   gets(a);
     
     for(i=0;i<=strlen(a);i++)
       {
       
      if(a[i]=='.')
      {
          count++;
      }
       }
       printf("%d",count);
    return 0;
}
