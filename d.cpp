#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void phone_division(char ss[]);
int main()
{
   char string[50];

   printf("폰번호 입력하고 (01012341234) Enter>");
   gets(string);
   phone_division(string);
   
   return 0;

}
void phone_division(char ss[]) 
{
	int nn,a1,a2,a3;
	nn=atoi(ss);
	if(nn/100000000>=10)
	{
	a3=nn%10000;
	nn=((nn-a3)/10000);
	a2=nn%10000;
	nn=((nn-a2)/10000);
	a1=nn;

    printf("결과 : 0%d - %d - %d\n", a1,a2,a3);
   }
   else
   {
   	a3=nn%10000;
	nn=((nn-a3)/10000);
	a2=nn%10000;
	nn=((nn-a2)/1000);
	a1=nn;

	printf("결과 : 0%d - %d - %d\n", a1,a2,a3);
   }
  }
