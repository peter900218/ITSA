#include <stdio.h>
#include <stdlib.h>

int power(int a, int b)
{
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    else
        return a*power(a,b-1);
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int x = power(a,b);
        printf("%d\n",x);
    }
}