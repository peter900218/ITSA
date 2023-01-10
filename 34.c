#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sex;
    float height;
    float weight;
    
    while(scanf("%f %d",&height,&sex)!=EOF)
    {
        

        if(sex == 1)
            weight = (height-80)*0.7;
        else
            weight = (height-70)*0.6;

        printf("%.1f\n",weight);
    }
    

}