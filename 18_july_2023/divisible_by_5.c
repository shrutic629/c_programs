#include<stdio.h>
int main() 
{
    int a;
    int b;
    
    printf("Enter the value of a:");
    scanf("%d", &a);
    
    if (a%5==0)
    { 
        printf("a is divisible by 5");
    }
    else { 
        printf("a is not divisible by 5");
    }
    
    return 0;
}
