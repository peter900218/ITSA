#include <stdio.h>
#include <stdlib.h>

int main()
{
    float min,max,tmp[10];
    scanf("%f %f %f %f %f %f %f %f %f %f",&tmp[0],&tmp[1],&tmp[2],&tmp[3],&tmp[4],&tmp[5],&tmp[6],&tmp[7],&tmp[8],&tmp[9]);
    max = tmp[0];
    min = tmp[0];

    for(int i=1;i<10;i++)
    {
        if(tmp[i]>max)
            max = tmp[i];
        if(tmp[i]<min)
            min = tmp[i];
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}