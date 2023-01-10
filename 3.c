#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;

    scanf("%d %d",&x,&y);

    double distance = x*x + y*y;

    if(distance<=10000)
        printf("inside\n");
    else
        printf("outside\n");
}