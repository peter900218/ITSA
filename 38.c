#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float sum=0, non_sum=0;

    scanf("%f",&a);

    for(int i=0;i<5;i++)
    {
        if(a>700)
        {
            int b;
            b = a-700;
            sum = sum + b * 5.63;
            non_sum = non_sum + b * 4.50;
            a = a-b;
        }
        else if(a>500)
        {
            int b;
            b = a-500;
            sum = sum + b * 4.97;
            non_sum = non_sum + b * 4.01;
            a = a-b;
        }
        else if(a>330)
        {
            int b;
            b = a-330;
            sum = sum + b * 4.39;
            non_sum = non_sum + b * 3.61;
            a = a-b;
        }
        else if(a>120)
        {
            int b;
            b = a-120;
            sum = sum + b * 3.02;
            non_sum = non_sum + b * 2.68;
            a = a-b;
        }
        else
        {       
            sum = sum + a * 2.10;
            non_sum = non_sum + a * 2.10;
            
            break;
        }
    }

    printf("Summer months:%.2f\n",sum);
    printf("Non-Summer months:%.2f\n",non_sum);

}