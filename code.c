#include <stdio.h>

int main()
{
    int f=1,i=1,a;
    scanf("%d",&a);
    
    
    if(a==0)
    {
        printf("the factorial of %d is 1",a);
    }
    while(i<=a)
    {
        f=f*i;
        i++;
    }
    printf("the factorial os %d is %d",a,f);
    
    return 0;
}
