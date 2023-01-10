#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    scanf("%d",&year);
    
    int a=year%4;
    int b=year%100;
    int c=year%400;

    if (a == 0){
        if (b == 0){
           if (c == 0)
               printf("Bissextile Year\n");
            else
               printf("Common Year\n");
        }   
        else
           printf("Bissextile Year\n");
    }
    else
        printf("Common Year\n");
}