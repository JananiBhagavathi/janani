#include <stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int flag=0,n,i;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    	if(a[i]==a[n-i-1])
    	{
    		flag=flag+1;
    	}
    }
    if(flag==n)
    printf("palindrome");
    else
     printf("not palindrome");
    
    
    return 0;
}
