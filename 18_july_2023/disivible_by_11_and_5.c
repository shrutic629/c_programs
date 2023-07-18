#include<stdio.h>
int main() 
{
    int a;
    
    printf("Enter the value of a:");
    scanf("%d", &a);
    
    if ((a%11 == 0) && (a%5==0))
    { 
        printf("Number is divisible by 11 and 5");
    }
    else { 
        printf("Number is not divisible by 11 and 5");
    }
    
    return 0;
}
