#include <iostream>
using namespace std;

int main()
{
    int n, i, j, min, minIndex, temp;
    int arr[] = {83, 65, 61, 45, 52, 53, 68, 41, 50, 54, 32, 18, 95, 36, 41, 51, 81, 37, 35, 25};
    n = sizeof(arr) / sizeof(arr[0]); // calculating the number of elements in the array
    cout << "\nThe value of n is: " << n << "\n";
    for (i = 0; i < n; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for (i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}