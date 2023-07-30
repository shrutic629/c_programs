// Armstrong

#include<stdio.h>
int armstrong(int n)
{
    int rem, sum = 0, temp;
    temp = n;

    while(n>0) {
        rem = n%10;
        sum = sum + (rem * rem * rem);
        n = n/10;
    }

    if (temp == sum) {
        printf("Its a Armstrong number");
    } else {
        printf("Not a Armstrong number");
    }
    
    return 0;
}

int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);

    armstrong(a);
    return 0;
}
