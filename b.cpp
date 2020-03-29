#include <stdio.h>
int main(void)
{
 char st[50];
 int  alphabet, number, symbol, i;
 alphabet=number=symbol=0;

 printf("문자열을 입력하고 Enter>");
 gets(st);
 
 for(i=0; st[i]!='\0' ; i++)//null입력될때까지  
 {
    if((st[i]<47) || ((58<=st[i]) && (st[i]<=64)) || ((91<=st[i]) && (st[i]<=96)))
       symbol++;
    else if (65<=st[i] && st[i]<=122)
       alphabet++;
    else
       number++;
 }
    printf("숫자:%d\n",number);
	printf("알파벳:%d\n",alphabet);
	printf("특수문자:%d",symbol);
}
