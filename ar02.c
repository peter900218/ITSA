#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6];

    for(int i=0;i<6;i++)
        scanf("%d",&a[i]);
    
    for(int i=5;i>=0;i--)
    {
        if(i==5)
            printf("%d",a[i]);
        else
            printf(" %d",a[i]);
    }
    printf("\n");
}