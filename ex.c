#include <stdio.h>
#include<string.h>

int main()
{
  char a[30],n,i,j;
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
      if(a[i]=='.')
      {
          for(j=i;j<=n;j++,i++)
          {
          printf("%c",a[i+1]);
          }
      }
  }
    
    return 0;
}
