#include <stdio.h>
#include <stdlib.h> 
void time_division(char aa[]);
int main(void)
{
   char string[50];
   printf("시간 문자열(예로 130725)을 입력하고 Enter>");
   
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
		printf("결과 : 오후 %d시 %d분 %d초\n", hour,minute,second);
	}
	else if(hour==12){
		printf("결과 : 오후 %d시 %d분 %d초\n", hour,minute,second);
	}
    else
	{
		printf("결과 : 오전 %d시 %d분 %d초\n", hour,minute,second);
	 } 
}
