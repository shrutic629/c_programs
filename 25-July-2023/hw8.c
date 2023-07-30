// Factorial

#include<stdio.h>
int factorial(int n)
{
    int i, sum = 1;
    for(i=1;i<=n;i++) {
        sum = sum * i;
    }

    return sum;
}

int main()
{
    int a, x;
    printf("Enter the number");
    scanf("%d", &a);

    x = factorial(a);
    printf("Factorial: %d", x);

    return 0;
}
