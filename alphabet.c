#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("ALPHABET");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("DIGIT");
    }
    else
    {
        printf("SPECIAL CHARACTER");
    }
 
    return 0;
} 
