#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;

    scanf("%d %d",&n,&m);
    if(n==0 || m==0)
        return 0;
    
    int a[n][m];
    int t[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            t[i][j] = a[j][i];
            if(j==0)
                printf("%d",t[i][j]);
            else
                printf(" %d",t[i][j]);
        }
        printf("\n");
    }

}