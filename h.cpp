#include <stdio.h>
#include <time.h>
void Seoul(void)
{
        int year, month, day, hour, min, sec;

        time_t curr;
        struct tm *d;
        curr = time(NULL);
        d = localtime(&curr);
        year = d->tm_year + 1900;
        month = d->tm_mon + 1;
        day = d->tm_mday;
        hour = d->tm_hour;
        min = d->tm_min;
        sec = d->tm_sec;

        printf("%d�� %d�� %d�� ����, ������ ���� �ð��� %d�� %d�� %d���Դϴ�\n", year, month, day, hour, min, sec);

}
void London(void)
{
        int year, month, day, hour, min, sec;

        time_t curr;
        struct tm *d;
        curr = time(NULL);
        d = localtime(&curr);
        year = d->tm_year + 1900;
        month = d->tm_mon + 1;
        day = d->tm_mday;
        hour = d->tm_hour-9;
        
        if (hour <= 0) //������ ���
        {
               hour = 24 + hour;
               day = day - 1;
        }
        min = d->tm_min;
        sec = d->tm_sec;

        printf("%d�� %d�� %d�� ������ ���� �ð��� %d�� %d�� %d���Դϴ�\n", year, month, day, hour, min, sec);

}
void Hongkong(void)
{
        int year, month, day, hour, min, sec;

        time_t curr;
        struct tm *d;
        curr = time(NULL);
        d = localtime(&curr);
        year = d->tm_year + 1900;
        month = d->tm_mon + 1;
        day = d->tm_mday;
        hour = d->tm_hour-1;
        if (hour <= 0)
        {
               hour = 24 + hour;
               day = day - 1;
        }
        min = d->tm_min;
        sec = d->tm_sec;
        printf("%d�� %d�� %d�� ȫ��, ����¡�� ���� �ð��� %d�� %d�� %d���Դϴ�\n", year, month, day, hour, min, sec);

}
void Sydney(void)
{
        int year, month, day, hour, min, sec;
        time_t curr;
        struct tm *d;
        curr = time(NULL);
        d = localtime(&curr);
        year = d->tm_year + 1900;
        month = d->tm_mon + 1;
        day = d->tm_mday;
        hour = d->tm_hour+2;
        if (hour > 24) //�������� ���
        {
               hour = hour - 24;
               day = day + 1;
        }
        min = d->tm_min;
        sec = d->tm_sec;

        printf("%d�� %d�� %d�� �õ��, ������� ���� �ð��� %d�� %d�� %d���Դϴ�\n", year, month, day, hour, min, sec);
}
int main(void)
{
//�׸���ġ ���� �θ� �ĸ� ���� ȫ�� ����¡ ���� ���� �õ�� ����� �ν��������� ����
        Seoul();
        London();
        Hongkong();
        Sydney();

        return 0;

}
