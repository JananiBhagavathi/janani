#include <stdio.h>
int main()
{
   char a[30];
   int i,count=0,count1=0,word=0;
   gets(a);
     for(i=0;a[i]!=NULL;i++)
       {
           
      /* if(((a[i]>=65)&&(a[i]<=97))||((a[i]>=90)&&(a[i]<=122)))
       {
         
           count++;
       }*/
           if(a[i+1]==' ')
           {
           word++;
       }
       
      
          /* if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
           {
                
               count1++;
           }*/
       }
   
   //printf("no of alphabets are:%d",count);
     //printf("\nno of numbers are:%d",count1); 
      printf("\nno of words are:%d",word); 
    return 0;
}
