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

        printf("%d년 %d월 %d일 서울, 동경의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

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
        
        if (hour <= 0) //전날일 경우
        {
               hour = 24 + hour;
               day = day - 1;
        }
        min = d->tm_min;
        sec = d->tm_sec;

        printf("%d년 %d월 %d일 런던의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

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
        printf("%d년 %d월 %d일 홍콩, 베이징의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

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
        if (hour > 24) //다음날일 경우
        {
               hour = hour - 24;
               day = day + 1;
        }
        min = d->tm_min;
        sec = d->tm_sec;

        printf("%d년 %d월 %d일 시드니, 멜버른의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);
}
int main(void)
{
//그리니치 런던 로마 파리 방콕 홍콩 베이징 서울 동경 시드니 멜버른 로스앤젤레스 뉴욕
        Seoul();
        London();
        Hongkong();
        Sydney();

        return 0;

}
