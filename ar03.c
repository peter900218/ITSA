#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6];
    int sum = 0;
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i]*a[i]*a[i]; 
    }
    printf("%d\n",sum);
}