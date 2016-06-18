#include <stdio.h>

int main()
{
  int m,n,count=0,i,j,flag=0;
  scanf("%d %d",&m,&n);
  for(i=m;i<=n;i++)
  {
     flag=0;
     for(j=2;j<=i/2;j++)
     {
      if(i%j==0)
      {
         
        flag=1;
        
       
      }
      
     }
     if(flag==0)
     {
         count++;
     }
  }
  
  
  printf("the no of prime numbers are:%d",count);  
 
    return 0;
}
