#include<stdio.h>
int main()
{
    int i,j,x=1;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d ",x*2);
            x++;
        }
        printf("\n");
    }
    return 0;
}