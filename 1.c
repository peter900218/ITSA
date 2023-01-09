#include <stdio.h>
#include <stdlib.h>

int output[9][23];

void BCD(int digit, int input)
{
    int number = input;
    int location = (digit+1)*5 + digit - 1;

    switch(number){
        case 0:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[2][location] = 1;
            output[2][location-4] = 1;
            output[4][location] = 1;
            output[4][location-4] = 1;
            output[6][location] = 1;
            output[6][location-4] = 1;

            output[8][location-4] = 1;
            output[8][location-3] = 1;
            output[8][location-2] = 1;
            output[8][location-1] = 1;
            output[8][location] = 1;
            break;
        case 1:
            output[0][location] = 1;
            output[2][location] = 1;
            output[4][location] = 1;
            output[6][location] = 1;
            output[8][location] = 1;
            break;
        case 2:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;

            output[8][location-4] = 1;
            output[8][location-3] = 1;
            output[8][location-2] = 1;
            output[8][location-1] = 1;
            output[8][location] = 1;

            output[2][location] = 1;
            output[6][location-4] = 1;
            break;

        case 3:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;

            output[8][location-4] = 1;
            output[8][location-3] = 1;
            output[8][location-2] = 1;
            output[8][location-1] = 1;
            output[8][location] = 1;

            output[2][location] = 1;
            output[6][location] = 1;
            break;
        case 4:
            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;

            output[0][location] = 1;
            output[0][location-4] = 1;
            output[2][location] = 1;
            output[2][location-4] = 1;

            output[6][location] = 1;
            output[8][location] = 1;
            break;
        case 5:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;

            output[8][location-4] = 1;
            output[8][location-3] = 1;
            output[8][location-2] = 1;
            output[8][location-1] = 1;
            output[8][location] = 1;

            output[2][location-4] = 1;
            output[6][location] = 1;
            break;
        case 6:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;

            output[8][location-4] = 1;
            output[8][location-3] = 1;
            output[8][location-2] = 1;
            output[8][location-1] = 1;
            output[8][location] = 1;

            output[2][location-4] = 1;
            output[6][location] = 1;
            output[6][location-4] = 1;
            break;
        case 7:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[2][location] = 1;
            output[4][location] = 1;
            output[6][location] = 1;
            output[8][location] = 1;
            break;
        case 8:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;

            output[8][location-4] = 1;
            output[8][location-3] = 1;
            output[8][location-2] = 1;
            output[8][location-1] = 1;
            output[8][location] = 1;

            output[2][location] = 1;
            output[2][location-4] = 1;
            output[6][location] = 1;
            output[6][location-4] = 1;
            break;
        case 9:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;

            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;

            output[2][location] = 1;
            output[2][location-4] = 1;
            output[6][location] = 1;
            output[8][location] = 1;
            break;
        default:
            output[0][location-4] = 1;
            output[0][location-3] = 1;
            output[0][location-2] = 1;
            output[0][location-1] = 1;
            output[0][location] = 1;
            output[1][location-4] = 1;
            output[1][location-3] = 1;
            output[1][location-2] = 1;
            output[1][location-1] = 1;
            output[1][location] = 1;
            output[2][location-4] = 1;
            output[2][location-3] = 1;
            output[2][location-2] = 1;
            output[2][location-1] = 1;
            output[2][location] = 1;
            output[3][location-4] = 1;
            output[3][location-3] = 1;
            output[3][location-2] = 1;
            output[3][location-1] = 1;
            output[3][location] = 1;
            output[4][location-4] = 1;
            output[4][location-3] = 1;
            output[4][location-2] = 1;
            output[4][location-1] = 1;
            output[4][location] = 1;
            output[5][location-4] = 1;
            output[5][location-3] = 1;
            output[5][location-2] = 1;
            output[5][location-1] = 1;
            output[5][location] = 1;
            output[6][location-4] = 1;
            output[6][location-3] = 1;
            output[6][location-2] = 1;
            output[6][location-1] = 1;
            output[6][location] = 1;
            output[7][location-4] = 1;
            output[7][location-3] = 1;
            output[7][location-2] = 1;
            output[7][location-1] = 1;
            output[7][location] = 1;
            output[8][location-4] = 1;
            output[8][location-3] = 1;
            output[8][location-2] = 1;
            output[8][location-1] = 1;
            output[8][location] = 1;

    }
}

int main()
{
    int input[4];
    int number;
    int digit = 1000;

    scanf("%d", &number);

    for(int i=0; i<4; i++)
    {
        input[i] = number/digit;
        number = number - input[i] * digit;
        digit = digit/10;
    }

    for(int j=0; j<9; j++)
    {
        for(int i=0; i<23; i++)
        {
            output[j][i] = -1;
        }
    }


    for(int i=0; i<4; i++)
    {
        BCD(i,input[i]);
    }

    for(int j=0; j<9; j=j+2)
    {
        for(int i=0; i<23; i++)
        {
            if(output[j][i] == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}