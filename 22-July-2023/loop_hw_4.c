#include<stdio.h>

int main()
{
    int i,j,x;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", j*j);
        }
        printf("\n");
    }
    return 0;
}