#include <bits/stdc++.h>
using namespace std;

int ProductSmallestPair(int arr[], int n, int sum)
{
    if (n < 2)
        return -1;

    int min = INT_MAX;
    int sMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            sMin = min;
            min = arr[i];
        }
        else if (arr[i] < sMin && arr[i] > min)
        {
            sMin = arr[i];
        }
    }

    if (min != sMin && (min + sMin) < sum)
    {
        int product = min * sMin;
        return product ? product : 0;
    }
    return 0;
}

int main()
{
    int n = 6;
    int arr[n] = {9, 8, 3, -7, 3, 9};

    int sum = 4;

    cout << ProductSmallestPair(arr, n, sum);
    return 0;
}