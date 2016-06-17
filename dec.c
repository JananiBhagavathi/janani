#include <stdio.h>

int main()
{
   long int quotient,num;
   int ans[100],i=1,j;
   scanf("%ld",&num);
   quotient=num;
   while(quotient!=0)
   {
       ans[i++]=quotient%2;
       quotient=quotient/2;
       
   }
   for(j=i-1;j>0;j--)
   {
       printf("%d",ans[j]);
   }
    
    return 0;
}
