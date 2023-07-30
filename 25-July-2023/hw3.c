#include<stdio.h>


int valid_for_vote(int n)
{
    if(n>=18)
    {
        printf("valid for vote");
    }
    else
    {
        printf("not valid for vote");
    }
    return 0;
}


int main()
{
    int age;
    printf("enter the number");
    scanf("%d", &age);
    
    valid_for_vote(age);
    
    return 0;
}
