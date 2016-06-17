#include <stdio.h>

int main()
{
    int min,max,a,i,ans;
    scanf("%d %d %d",&a,&min,&max);
    
    for(i=min;i<=max;i++)
    {
        ans=i*a;
        printf("\n%d*%d=%d",a,i,ans);
    }
    
    return 0;
}
