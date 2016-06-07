#include <stdio.h>
#include<string.h>
int main(){
     char ch[50];
     int i,c=0,n;
gets(ch);
 
 
n=strlen(ch);
     for(i=0;i<n;i++){
    if(ch[i]==' '){
       c++;
      
    }
     }
     printf("\n\nTotal words are %d",c+1);
  return 0;
}
