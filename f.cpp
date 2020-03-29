#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void aaa(char ss[]);
int main()
{
   char string[50];
   printf("금액을 입력 (ex:54300) Enter>");
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
	a2=nn%10;
	nn=((nn-a2)/10);
	a1=nn%10;
	nn=((nn-a1)/10);

    printf("결과 : 만원권:%d개 천원권:%d개 백원동전:%d개 십원동전:%d개\n", nn,a1,a2,(a3/10));

  }
