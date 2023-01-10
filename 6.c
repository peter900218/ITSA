#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;

    scanf("%d",&month);

    if( 3<=month && month<=5 )
        printf("Spring\n");
    else if( 6<=month && month<=8 )
        printf("Summer\n");
    else if( 9<=month && month<=11 )
        printf("Autumn\n");
    else
        printf("Winter\n");

}