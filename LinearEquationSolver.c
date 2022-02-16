#include <stdio.h>
#include <conio.h>

// #define does not contain is equal to sign

#define ORDER 3

// Function To Calculate Value Of A 3x3 Determinant

int determinant(int **p)
{
    int detVal;
    printf("\n\n");
    detVal = p[0][0] * ((p[1][1] * p[2][2]) - (p[2][1] * p[1][2])) - p[0][1] * (p[1][0] * p[2][2] - p[2][0] * p[1][2]) + p[0][2] * (p[1][0] * p[2][1] - p[2][0] * p[1][1]);
    return detVal;
}

// Equation Solving Function For 3 Variables

void equationSolver3()
{
    float x, y, z;
    int i, j, count;
    int equation[3][4], crammer[3][3];
    int del[4];

    // Taking The linear Equations As Input

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            switch (j)
            {
            case 0:
                printf("\nEnter Coefficient Of X In Equation %d: ", i + 1);
                scanf("%d", &equation[i][j]);
                break;
            case 1:
                printf("\nEnter Coefficient Of y In Equation %d: ", i + 1);
                scanf("%d", &equation[i][j]);
                break;
            case 2:
                printf("\nEnter Coefficient Of Z In Equation %d: ", i + 1);
                scanf("%d", &equation[i][j]);
                break;
            case 3:
                printf("\nEnter Constant In Equation %d: ", i + 1);
                scanf("%d", &equation[i][j]);
                break;

            default:
                break;
            }
        }
    }

    // Showing The Linear Equations

    printf("\n\nYour Linear Equations Are: ");
    for (i = 0; i < 3; i++)
    {
        j = 0;
        printf("\n%dX + %dY + %dZ = %d", equation[i][j], equation[i][j + 1], equation[i][j + 2], equation[i][j + 3]);
    }

    // Calculation Part For Del, Del1, Del2, Del3

    for (count = 0; count < 4; count++)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (j == count)
                    crammer[i][j] = equation[i][3];
                else
                    crammer[i][j] = equation[i][j];
            }
        }

        // Printing The Determinants

        if (count == 3)
            printf("\nPrinting Del\n");
        else
            printf("\nPrinting Del%d\n", count + 1);

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", crammer[i][j]);
            }
            printf("\n\n");
        }

        del[count] = determinant(crammer);
        printf("\nValue Of Determinant is %d", del[count]);
    }

    // Finally Solving For x,y,z

    if (del != 0)
    {
        x = del[0] / del[3];
        y = del[1] / del[3];
        z = del[2] / del[3];
        printf("\nValue Of X is %f", x);
        printf("\nValue Of Y is %f", y);
        printf("\nValue Of Z is %f", z);
    }
    else
    {
        printf("Equation Has Trivial Solution");
    }
}

void main()
{
    int n;
    printf("The Equations Must Be In The Format Of Any One Of These:");
    printf("\nAX+BY=C");
    printf("\nAX+BY+CZ=D");
    printf("\nAX+BY+CZ+DW=E");
    printf("\nEnter number of variables in linear equations: ");
    scanf("%d", &n);

    switch (n)
    {
    case 2:
        // equationSolver2();
        break;
    case 3:
        equationSolver3();
        break;
    case 4:
        // equationSolver4();
        break;

    default:
        break;
    }
    getch();
}
