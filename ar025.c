#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[300];
    int b[128]={0};

    scanf("%s",a);

    int size = 0;

    for(int i=0;a[i]!='\0';i++)
    {
        //printf("%d ",a[i]);
        b[a[i]]++;
        size++;
    }
    for(int i=127;i>=0;i--)
    {
        if(b[i]!=0)
        {
            printf("%d %d\n",i,b[i]);
        }
    }


}