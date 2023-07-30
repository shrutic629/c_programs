#include<stdio.h>


int add (int a, int b, int c,int d)
{
    int sum = a+b+c+d;
    return sum;
}


int main()

{   int sum;
    sum = add(1, 2, 3,4);
    printf("%d", sum);
}

