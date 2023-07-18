#include<stdio.h>
int main() 
{
    int age;
    
    printf("Enter the age:");
    scanf("%d", &age);
    
    if (age > 18)
    { 
        printf("Valid for vote");
    }
    else { 
        printf("Not valid for vote");
    }
    
    return 0;
}
