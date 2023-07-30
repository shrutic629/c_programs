// Reverse

#include<stdio.h>
int reverse(int n)
{
    int rem, sum = 0;

    while(n>0) {
        rem = n%10;
        sum = sum * 10 + rem;
        n = n/10;
    }

    return sum;
}

int main()
{
    int a, x;
    printf("Enter the number");
    scanf("%d", &a);

    x = reverse(a);
    printf("Reversed number: %d", x);
    return 0;
}
