#include <bits/stdc++.h>
using namespace std;

// Brute --> O(n+k) O(k)
void rotateByKplacesLeft(int arr[], int n, int k)
{
    k = k % n;

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - n + k];
    }
}

// Optimal - O(n) O(1)

void rotateArray(int arr[], int n, int k)
{
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}

void rightRotate(int arr[], int n, int k)
{
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    arr = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int k = 3;
    // rotateByKplacesLeft(arr, n, k);
    rotateArray(arr, n, k);
    // rightRotate(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}