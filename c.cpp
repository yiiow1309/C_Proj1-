#include <stdio.h>
#include <stdlib.h> 
void time_division(char aa[]);
int main(void)
{
   char string[50];
   printf("�ð� ���ڿ�(���� 130725)�� �Է��ϰ� Enter>");
   
   gets(string);
   time_division(string);

   return 0;
   
}
void time_division(char aa[])
{
	int number,hour,second,minute;
	
	number=atoi(aa);
	second=number%100;
	number=((number-second)/100);
	minute=number%100;
	number=((number-minute)/100);
	hour=number%100;
	
	if(hour>=13)
	{
		hour=hour-12;
		printf("��� : ���� %d�� %d�� %d��\n", hour,minute,second);
	}
	else if(hour==12){
		printf("��� : ���� %d�� %d�� %d��\n", hour,minute,second);
	}
    else
	{
		printf("��� : ���� %d�� %d�� %d��\n", hour,minute,second);
	 } 
}
