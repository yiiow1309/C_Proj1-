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
        
        printf("n�� �� �˶����� 1�Է�//n�� �� �˶����� 2�Է�");
        scanf("%d", &sel);
        switch (sel)
        {
        case 1:
               printf("n�� �Է�");
               scanf("%d", &min);
               min *= 60; 
               alarm(min);
               break;
        case 2:
               printf("n�� �Է�");
               scanf("%d", &sec);
               alarm(sec);

               break;
        }
        return 0;
}
