#include<stdio.h>
int main() 
{
    int a,b,c,d,e;
    
    printf("Enter the value of 5 subjects:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if ((a>40) && (b>40) && (c>40) && (d>40) && (e>40))
    { 
        printf("You passed!");
    }
    else { 
        printf("you failed");
    }
    
    return 0;
}
