#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void aaa(char ss[]);
int main()
{
   char string[50];
   printf("�ݾ��� �Է� (ex:54300) Enter>");
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

    printf("��� : ������:%d�� õ����:%d�� �������:%d�� �ʿ�����:%d��\n", nn,a1,a2,(a3/10));

  }
