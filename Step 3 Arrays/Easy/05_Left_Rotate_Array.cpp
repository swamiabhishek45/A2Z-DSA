#include <bits/stdc++.h>
using namespace std;

void leftRotateArr(int arr[], int n)
{

    int first = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = first;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void rightRotateArr(int arr[], int n)
{
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    cout << "Left Rotation : ";
    leftRotateArr(arr, n);
    cout << endl;
    cout << "Right Rotation : ";
    rightRotateArr(arr, n);
    return 0;
}