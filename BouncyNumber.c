#include <stdio.h>
#include <conio.h>
void main()
{
    int num, i, a = 0, b = 0, c = 0, flag = 0, runOnce = 1;
    printf("Enter a number to check: ");
    scanf("%d", &num); // Taking user input in the varible called num
    while (num > 0)
    {
        if (runOnce) // This loop needs to be executed only once
        {
            a = num % 10;
            num /= 10;
            b = num % 10;
            num /= 10;
            c = num % 10;
            num /= 10;
            runOnce--; // Decreases the runOnce value so this does not execute further
        }

        // Here logic is we are taking three digits of the number in c-b-a form.
        // If b is either greater or less than both a and c,then the flag is triggered and loop is terminated

        if ((b > a && b > c) || (b < a && b < c))
        {
            flag = 1;
            break;
        }
        else // This else shifts the values by one place and takes next digit in variable c
        {
            a = b;
            b = c;
            c = num % 10;
            num /= 10;
        }
    }
    if (flag) // Checking if the flag value has changed from 0 or not
    {
        printf("\nBouncy Number");
    }
    else if (a > b && b > c)
    {
        printf("\nIncreasing Number");
    }
    else
    {
        printf("\nDecreasing Number");
    }
}