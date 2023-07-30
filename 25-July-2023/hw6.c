// Palindrome

#include<stdio.h>
int palindrome(int n)
{
    int rem, sum = 0, temp;
    temp = n;

    while(n>0) {
        rem = n%10;
        sum = sum * 10 + rem;
        n = n/10;
    }

    if (temp == sum) {
        printf("Its a Palindrome");
    } else {
        printf("Not a palindrome");
    }
    
    return 0;
}

int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);

    palindrome(a);
    return 0;
}
