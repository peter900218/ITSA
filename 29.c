#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    char b[9];
    int xy,x,y;

    scanf("%c%s",&a,b);

    
    xy = a;

    if(xy>=65 && xy<=72)
        xy = xy-55;
    else if(xy == 73)
        xy = 34;
    else if(xy>=74 && xy<=78)
        xy = xy - 56;
    else if(xy == 79)
        xy = 35;
    else if(xy>=80 && xy<=86)
        xy = xy-57;
    else if(xy == 87)
        xy = 32;
    else if(xy == 88)
        xy = 30;
    else if(xy == 89)
        xy = 31;
    else if(xy == 90)
        xy = 33;

    x = xy/10;
    y = xy%10;

    int cul = x + (9*y) + (8*(b[0]-48)) + (7*(b[1]-48)) + (6*(b[2]-48)) + (5*(b[3]-48)) + (4*(b[4]-48)) + (3*(b[5]-48)) + (2*(b[6]-48)) + (b[7]-48) + (b[8]-48);
/*
    printf("%d %d %d\n",xy,x,y);
    for(int i=0;i<9;i++)
    {
        printf("%d ",b[i]-48);
    }
    printf("\n%d",cul);*/

    if(cul%10 == 0)
        printf("CORRECT!!!\n");
    else
        printf("WRONG!!!\n");
}