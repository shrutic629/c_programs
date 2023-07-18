#include<stdio.h>
int main() 
{
    int a;
    int b;
    
    printf("Enter the value of a:");
    scanf("%d", &a);
    
    if (a%2==0)
    { 
        printf("a is even number");
    }
    else { 
        printf("a is odd number");
    }
    
    return 0;
}
