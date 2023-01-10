#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mi;
    double km;

    scanf("%d",&mi);

    km = (double)mi * 1.6;

    printf("%.1lf\n",km);

}