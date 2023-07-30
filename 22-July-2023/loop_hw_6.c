#include <stdio.h>

int main() {
    int num, sum,i;
    sum = 0;

    printf("Enter a number between 1 to 10: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0;
}