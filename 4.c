#include <stdio.h>
#include <stdlib.h>

int main()
{
    int str_min, str_sec;
    int end_min, end_sec;
    int coin = 0;

    scanf("%d %d\n%d %d",&str_min, &str_sec, &end_min, &end_sec);

    int minus = (end_min - str_min)*60 + (end_sec - str_sec);
    int half = minus / 30;

    if(half <= 4)
        coin = half * 30;
    else if(half <= 8)
    {
        half = half - 4;
        coin = 120 + half * 40;
    }
    else
    {
        half = half - 8;
        coin = 120 + 160 + half * 60;
    }

    printf("%d\n",coin);
}