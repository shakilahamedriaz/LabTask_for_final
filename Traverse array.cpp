#include <bits/stdc++.h>
using namespace std;


void printArray(int* arr, int n)
{
    int i;

    cout << "Array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr[] = {2, -1, 5, 6, 0, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    return 0;
}
