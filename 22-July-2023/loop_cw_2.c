#include <stdio.h>

int main() {
    int sum,i;
    sum = 0;
    for(i=1;i<=5;i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0;
}