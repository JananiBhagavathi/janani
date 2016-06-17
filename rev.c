#include <stdio.h>

int main()
{
   int a,rn=0,rm;
   scanf("%d",&a);
   while(a!=0)
   {
       rm=a%10;
       rn=rn*10+rm;
       a=a/10;
   }
   printf("%d",rn);
    
    return 0;
}
