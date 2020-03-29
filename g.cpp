#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void aaa(char ss[]);
int main()
{
   char string[50];
   printf(" 주민등록번호 (ex:980217) Enter>");
   gets(string);
   aaa(string);

   return 0;

}
void aaa(char ss[]) 
{
	int nn,a1,a2,a3;
	
	nn=atoi(ss);
	a3=nn%100;
	nn=((nn-a3)/100);
	a2=nn%100;
	nn=((nn-a2)/100);
	
    printf("결과 : 19%d년 %d월 %d일\n", nn,a2,a3);
  }
