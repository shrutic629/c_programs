#include<stdio.h>

int main()
{
    int i,a,b;

    for(i=1; i<=100; i++)
    {
        if ((i%3==0) && (i%7==0)) {
            printf("%d ", i);
        }
    }
    return 0;
}