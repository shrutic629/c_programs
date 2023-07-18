#include<stdio.h>
int main() 
{
    int num;
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    if (num > 10)
    { 
        printf("%d is greater than 10", num);
    }
    
    return 0;
}
