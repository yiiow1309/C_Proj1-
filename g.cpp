#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void aaa(char ss[]);
int main()
{
   char string[50];
   printf(" �ֹε�Ϲ�ȣ (ex:980217) Enter>");
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
	
    printf("��� : 19%d�� %d�� %d��\n", nn,a2,a3);
  }
