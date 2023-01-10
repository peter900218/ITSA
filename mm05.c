#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a;

    scanf("%lf",&a);
    
    double m = a*a;

    m = m + 0.04;
    //double test = m * 100;


    /*if((int)test%10>=5)
        m = m+0.1;*/

    
    printf("%.1lf\n",m);
}