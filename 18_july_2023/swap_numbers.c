#include<stdio.h>
int main() 
{
    int a = 10;
    int b = 20;
    int c;
    
    printf("Real value of a: %d\n", a);
    printf("Real value of b: %d\n", b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("Swap value of a: %d\n", a);
    printf("Swap value of b: %d\n", b);
    
    return 0;
}
