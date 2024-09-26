#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i; // FOUND
        }
    }
    return -1; // NOT FOUND
}

int main()
{
    int n = 7;
    int arr[n] = {4, 2, 7, 8, 1, 2, 5};

    int target = 8;

    cout << linearSearch(arr, n, target);

    return 0;
}