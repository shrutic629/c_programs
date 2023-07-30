#include<stdio.h>
int main ()
{
    int num;
    int rem, sum = 0;
    printf("enter any number");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num%10;
        sum = sum *10 +rem;
        num = num/10;
    }
    printf("the reverse number of num is %d", sum);
    
    return 0;
}