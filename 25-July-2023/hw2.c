#include<stdio.h>

int add(int a, int b) 
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

int divide(int a, int b) {
 return a/b;
}


int modulo(int a, int b)
{
    return a%b;
}


int main()
{
    int a=50; 
    int b=2;
    
    int c,d,e,f,g;
    
    c=add(a,b);
    d=sub(a,b);
    e=multiply(a,b);
    f=divide(a,b);
    g=modulo(a,b);
    
    printf("the answer is %d\n", c);
    printf("the answer is %d\n", d);
    printf("the answer is %d\n", e);
    printf("the answer is %d\n", f);
    printf("the answer is %d\n", g);
    return 0;
}