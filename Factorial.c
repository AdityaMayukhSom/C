#include <stdio.h>

int factorial(int num)
{
    if (num == 1)
        return 1;
    return (num * factorial(num - 1));
}

int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    printf("It's Factorial Is %d", factorial(n));
    return 0;
}
