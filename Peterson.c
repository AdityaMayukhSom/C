// Peterson Number Checking
// A number is said to be Peterson if the sum of factorials of each digit is equal to the sum of the number itself.

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, originalVar, totalSum = 0, temp, fact = 1, i;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    originalVar = n;
    while (n > 0)
    {
        temp = n % 10;
        for (i = 1; i <= temp; i++)
            fact = fact * i;
        totalSum = totalSum + fact;
        fact = 1;
        n = n / 10;
    }
    if (totalSum == originalVar)
        printf("The number is Peterson Number.");
    else
        printf("This number is not Peterson Number.");
    getch();
}
