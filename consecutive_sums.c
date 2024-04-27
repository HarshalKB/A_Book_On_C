#include <stdio.h>

int main(void)
{
    int i = 1, sum = 0;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of numbers upto %d is equal to : %d\n", n, sum);

    return 0;
}