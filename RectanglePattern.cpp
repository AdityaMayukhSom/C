#include <iostream>
using namespace std;

int main()
{
    int lineNumber, starNumber;
    int i, j;

    cout << "Enther Number Of Lines To Print: ";
    cin >> lineNumber;
    cout << "Enter Number Of Stars To Print Per Line: ";
    cin >> starNumber;
    for (i = 0; i < lineNumber; i++)
    {
        for (j = 0; j < starNumber; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}