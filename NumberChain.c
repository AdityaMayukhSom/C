#include <stdio.h>
#include <conio.h>
#include <math.h>

// num = a, inputNum = b
int stepValidity(int a, int b);
int calculateDigit(int var);
int checkModifyDigit(int a, int b);
int checkAddDigit(int a, int b);
int checkRemoveDigit(int a, int b);

int calculateDigit(int var)
{
    int digit = 0;
    while (var > 0)
    {
        var /= 10;
        digit++; // Calculating Number Of Digits in Input
    }
    return digit;
}

int checkAddDigit(int a, int b)
{

    int num1, num2, newNum = 0;
    int i, p = 0, q = 0;
    int digiCount = 0, count = 0;
    int temp1 = 0, temp2 = 0;

    num1 = b;
    num2 = a;

    digiCount = calculateDigit(num1);

    for (i = 0; i < digiCount; i++)
    {
        p = pow(10, i);
        q = pow(10, i + 1);
        temp1 = num1 % p;
        temp2 = num1 / q;
        newNum = ((temp2 * p) + temp1);
        if (newNum == num2)
        {
            count++;
        }
    }
    return count;
}

int checkRemoveDigit(int a, int b)
{

    int num1, num2, newNum = 0;
    int i, p = 0, q = 0;
    int digiCount = 0, count = 0;
    int temp1 = 0, temp2 = 0;

    num1 = a;
    num2 = b;

    digiCount = calculateDigit(num1);

    for (i = 0; i < digiCount; i++)
    {
        p = pow(10, i);
        q = pow(10, i + 1);
        temp1 = num1 % p;
        temp2 = num1 / q;
        newNum = ((temp2 * p) + temp1);
        if (newNum == num2)
        {
            count++;
        }
    }
    return count;
}

int checkModifyDigit(int a, int b)
{
    int digit1, digit2;
    int i, count = 0;
    digit1 = calculateDigit(a);
    digit2 = calculateDigit(b);
    if (digit1 == digit2) // If Digit1 and Digit2 values become equal, execution returns to the original function
    {
        for (i = 0; i < digit1; i++)
        {
            if ((a % 10) == (b % 10))
            {
                a /= 10;
                b /= 10;
            }
            else
            {
                a /= 10;
                b /= 10;
                count++;
            }
        }
    }
    else
    {
        return 0;
    }
    return count;
}
int stepValidity(int a, int b)
{
    int add, remove, modify;
    modify = checkModifyDigit(a, b);
    add = checkAddDigit(a, b);
    remove = checkRemoveDigit(a, b);

    if (((add == 1) && (remove != 1) && (modify != 1)) || ((add != 1) && (remove == 1) && (modify != 1)) || ((add != 1) && (remove != 1) && (modify == 1)))
        return 1;
    else
        return 0;
}

int main()
{
    int start_number, end_number, temporary, previous;
    int i, j = 0, validity = 0;
    int stepCount = 0, errorCount = 0;
    scanf("%d", &start_number);
    scanf("%d", &end_number);
    printf("%d to %d\n", start_number, end_number);
    previous = start_number;

    for (stepCount = 0; stepCount < 10; stepCount++)
    {
        scanf("%d", &temporary);
        if (previous == temporary)
        {
            continue;
        }
        else
        {
            validity = stepValidity(previous, temporary);

            if (validity == 1)
            {
                printf("\nStep %d : %d to %d", ++j, previous, temporary);
                if (temporary == end_number)
                {
                    printf("\nYou Win The Game!");
                    break;
                }
            }
            else
            {
                printf("\nError %d : %d to %d", ++errorCount, previous, temporary);
                stepCount--;
            }
        }

        previous = temporary;
    }
    return 0;
}
