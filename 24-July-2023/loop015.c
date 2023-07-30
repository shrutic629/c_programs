#include<stdio.h>
int main()
{
    int i,j,x = 0;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("%d ",x);
        }
        printf("\n");
        if (x == 0) 
        {
            x = 1;
        } else {
            x = 0;
        }
    }
    return 0;
}