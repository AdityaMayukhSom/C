#include <stdio.h>
#include <conio.h>

void main()
{
    int originalVar, i, temp, expo = 0, powVar = 1, copyVar1, copyVar2, totalSum = 0;
    printf("Enter the number to check: ");
    scanf("%d", &originalVar);

    // Copying the original number into 2 variables so we can work on the copy
    // This way original variable is not chenged during any operation
    copyVar1 = originalVar;
    copyVar2 = originalVar;

    // Code to calculate power of each number
    while (copyVar1 > 0)
    {
        copyVar1 = copyVar1 / 10;
        expo++; // expo is the total number of digits in the given number
    }

    // Calculation
    while (copyVar2 > 0)
    {
        i = 1;
        temp = copyVar2 % 10; // Extracting numbers from the given input

        // Code to calculate each number raised to the number of digits
        while (i <= expo)
        {
            powVar = powVar * temp; // powVar is each number raised to the number of digits
            i++;
        }
        totalSum = totalSum + powVar; // Add each powVar with the total sum which is initialised with 0
        copyVar2 = copyVar2 / 10;
        powVar = 1; // Resetting powVar to 1 so next time it starts with multiplying 1
    }

    // Logic to check is it is Armstrong Number or not
    if (totalSum == originalVar)
        printf("The number is Armstrong Number");
    else
        printf("The number is not Armstrong Number");
    getch();
}
