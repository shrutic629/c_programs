#include<stdio.h>


int odd_even(int n)
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}


int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    
    odd_even(num);
    
    return 0;
}
