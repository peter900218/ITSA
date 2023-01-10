#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    a = a - 2010;
    while(a<0)
        a = a+12;
    while(a>=12)
        a = a-12;

    switch(a){
        case 0:
            printf("tiger\n");
            break;
        case 1:
            printf("rabbit\n");
            break;
        case 2:
            printf("dragon\n");
            break;
        case 3:
            printf("snake\n");
            break;
        case 4:
            printf("horse\n");
            break;
        case 5:
            printf("sheep\n");
            break;
        case 6:
            printf("monkey\n");
            break;
        case 7:
            printf("rooster\n");
            break;
        case 8:
            printf("dog\n");
            break;
        case 9:
            printf("pig\n");
            break;
        case 10:
            printf("rat\n");
            break;
        case 11:
            printf("ox\n");
            break;
        
    }
    //printf("%d",a);
}