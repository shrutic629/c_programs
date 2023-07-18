#include<stdio.h>
int main() 
{
    int a;
    int b;
    int c;
    
    printf("Enter the value of a b and c:");
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a>b) && (a>c))
    { 
        printf("a is greater then b and c");
    }
    else { 
        printf("a is not greater then b and c");
    }
    
    return 0;
}
