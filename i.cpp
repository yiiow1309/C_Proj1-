#include <stdio.h>
#include <time.h>
#include <Windows.h>
void alarm(int sec)
{
        Sleep(sec*1000);

        printf("\a");

}
int main(void)
{
        int sel;
        int min, sec;
        
        printf("n분 후 알람설정 1입력//n초 후 알람설정 2입력");
        scanf("%d", &sel);
        switch (sel)
        {
        case 1:
               printf("n분 입력");
               scanf("%d", &min);
               min *= 60; 
               alarm(min);
               break;
        case 2:
               printf("n초 입력");
               scanf("%d", &sec);
               alarm(sec);

               break;
        }
        return 0;
}
