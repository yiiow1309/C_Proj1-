#include <stdio.h>
int main(void)
{
 char st[50];
 int  alphabet, number, symbol, i;
 alphabet=number=symbol=0;

 printf("���ڿ��� �Է��ϰ� Enter>");
 gets(st);
 
 for(i=0; st[i]!='\0' ; i++)//null�Էµɶ�����  
 {
    if((st[i]<47) || ((58<=st[i]) && (st[i]<=64)) || ((91<=st[i]) && (st[i]<=96)))
       symbol++;
    else if (65<=st[i] && st[i]<=122)
       alphabet++;
    else
       number++;
 }
    printf("����:%d\n",number);
	printf("���ĺ�:%d\n",alphabet);
	printf("Ư������:%d",symbol);
}
