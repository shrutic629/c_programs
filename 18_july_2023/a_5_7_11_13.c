#include<stdio.h>
int main() 
{
    int a;
    
    printf("Enter the value of a:");
    scanf("%d", &a);
    
    if ((a==5) || (a==7) || (a==11) || (a==13))
    { 
        printf("Valid");
    }
    else { 
        printf("Not valid");
    }
    
    return 0;
}
