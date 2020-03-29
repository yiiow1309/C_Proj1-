#include<stdio.h>
#include<ctype.h>
int main (void)
{
	char ch1='a',ch2='B';
	
	printf("%c\n",ch1-32);
	printf("%c\n",ch2+32);
	printf("%c\n",toupper(ch1));
	printf("%c\n",tolower(ch2));


	return 0;
}
