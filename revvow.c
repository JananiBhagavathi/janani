#include <stdio.h>

int main()
{
  char str[30],str1[30];
  int n,i,j=0;
  scanf("%s",str);
  n=strlen(str);
  for(i=n-1;i>=0;i--)
  {
      str1[j++]=str[i];
  }
  for(j=0;j<n;j++)
  {
      if(str1[j]=='a'||str1[j]=='A' || str1[j]=='e'||str1[j]=='E'||str1[j]=='i'||str1[j]=='I'||str1[j]=='o'||str1[j]=='O'||str[j]=='u'||str1[j]=='U')
      {
      
       }
       else
       printf("%c",str1[j]);
  }
  
    return 0;
}
