#include <stdio.h>
int main(void) 
{
	int n;
int a,b,c;
scanf("%d",&n);
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is larger",a);
else if(b>a&&b>c)
printf("%d is larger",b);
else
printf("%d is larger",c);
	return 0;
}
