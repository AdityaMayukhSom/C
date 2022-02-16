#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class linearEquation
{
    int n, k, i, j;
    char ch;
    int **coeff;

private:
    void printFormat()
    {
        cout << "\nThe Equation Should Be In The Format Of ";
        for (i = 0; i <= n; i++)
        {
            ch = 65 + i;
            if (i == 0)
            {
                cout << ch << "x" << i;
            }
            else if (i == n)
            {
                cout << " = " << ch;
            }
            else
            {
                cout << " + " << ch << "x" << i;
            }
        }
    }

    void createCoeffArr()
    {
        coeff = (int **)malloc(n * sizeof(int *));
        for (i = 0; i < n; i++)
        {
            coeff[i] = (int *)malloc(k * sizeof(int));
        }
    }

    void coeffInput()
    {
        createCoeffArr();
        for (i = 0; i < n; i++)
        {
            cout << "\nYou Are Entering Coefficients Of Equation " << (i + 1);
            for (j = 0; j < k; j++)
            {
                if (j == n)
                {
                    cout << "Enter Constant Term: ";
                    cin >> *(*(coeff + i) + j);
                }
                else
                {
                    cout << "Enter Coefficient Of x" << j << ": ";
                    cin >> *(*(coeff + i) + j);
                }
            }
        }
    }

    void printEquation()
    {
        for (i = 0; i < n; i++)
        {
            cout << "\n";
            for (j = 0; j < k; j++)
            {
                if (j == 0)
                {
                    cout << *(*(coeff + i) + j) << "x" << j;
                }
                else if (j == n)
                {
                    cout << " = " << *(*(coeff + i) + j);
                }

                else
                {
                    cout << " + " << *(*(coeff + i) + j) << "x" << j;
                }
            }
        }
    }

    int makeDet(int **p)
    {
        int ***arr;
        arr = (int ***)malloc(k * sizeof(int **));
        for (i = 0; i < k; i++)
        {
            *(arr + i) = (int **)malloc(n * sizeof(int *));
            for (i = 0; i < n; i++)
            {
                *(*(arr + i) + i) = (int *)malloc(n * sizeof(int));
            }
        }
    }
    int calcDet(int **p)
    {
    }

public:
    int getVarNum()
    {
        cout << "\nEnther The Number Of Variables: ";
        cin >> n;
        k = n + 1;
        printFormat();
    }
    void getEquations()
    {
        createCoeffArr();
        coeffInput();
        printEquation();
    }
    void solveEquation()
    {
        calcDet(coeff);
    }
    void showScreen()
    {
        ;
    }
};

int main()
{
    linearEquation equation;
    equation.getVarNum();
    equation.getEquations();
    equation.showScreen();
    return 0;
}
