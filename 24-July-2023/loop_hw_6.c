#include<stdio.h>

int main()
{
    int i,a,b;

    for(i=1; i<=100; i++)
    {
        if ((i%5==0) && (i%11==0)) {
            printf("%d ", i);
        }
    }
    return 0;
}