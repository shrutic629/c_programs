#include<stdio.h>
int main()
{
    int i,j,x=1;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
