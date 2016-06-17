#include <stdio.h>

int main()
{
    char a[30],b[30];
    int i,j,m,n;
    gets(a);
    gets(b);
    m=strlen(a);
    i=m;
    for(j=0;b[j]!=NULL;i++,j++)
    {
    a[i]=b[j];
    }
    printf("%s",a);
    
    return 0;
}
