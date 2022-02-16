#include <iostream>
#include <climits> //This is included so that we can use INT_MAX and INT_MIN in initializing maximum and minimum
using namespace std;

int main()
{
    int n, minimum, maximum, i;

    // Asking user for the size of the array
    cout << "Enter the number of elements in array: ";
    cin >> n;

    // Creating an array of user specified size
    int arr[n];

    // Loop for taking array as input from user
    for (i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element is the array: ";
        cin >> arr[i];
    }

    maximum = INT_MIN; // Initialize maximum with the minimum number available in C++ so that whenever a number larger than max occurs in array, it changes itself to that nunmber
    minimum = INT_MAX; // Initialize minimum with the maximum number available in C++ so that whenever a number smaller than min occurs in array, it changes itself to that nunmber

    // Loop to find out maximum and minimum value in the array
    for (i = 0; i < n; i++)
    {
        // The below mentioned loop can also be done like this
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }

    // Printing the output i.e. the maximum and te minimum number
    cout << "\nThe largest number in the array is " << maximum;
    cout << "\nThe smallest number in the array is " << minimum;

    return 0;
}