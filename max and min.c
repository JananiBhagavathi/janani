#include <stdio.h>

int main(void) {
	
int max,min,i,sum,size,a[30];
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<size;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("max number:%d and min number %d ",max,min);
sum=max+min;
printf("\nsum of max and min number is %d",sum);

	return 0;
}
