#include<stdio.h>
int main()
{
    int i,s,j;
    for(i=1; i<=3; i++)
    {
        for(s=2; s>=i; s--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
        for(i=1; i<=3; i++)
    {
        for(s=0; s<=i; s++)
        {
            printf(" ");
        }
        for(j=3; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}