#include <stdio.h>

int main(void) {
char a;
int lower,upper;
scanf("%c",&a);
lower=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
upper=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
if(lower||upper)
printf("vowels");
else
printf("consonants");
	return 0;
}
