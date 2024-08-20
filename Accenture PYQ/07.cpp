#include <bits/stdc++.h>
using namespace std;

int LargeSmallSum(int arr[], int n)
{

    if (n <= 3)
        return 0;

    int Large = INT_MIN;
    int SLarge = INT_MIN;

    int small = INT_MAX;
    int SSmall = INT_MAX;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Large)
        {
            SLarge = Large;
            Large = arr[i];
        }
        else if (arr[i] > SLarge && arr[i] < Large)
        {
            SLarge = arr[i];
        }

        if (arr[i] < small)
        {
            SSmall = small;
            small = arr[i];
        }
        else if (arr[i] < SSmall && arr[i] > small)
        {
            SSmall = arr[i];
        }
    }
    sum = SLarge + SSmall;
    return sum;
}

int main()
{
    int n = 6;
    int arr[] = {4, 8, 3, 5, 1, 7};

    cout << LargeSmallSum(arr, n);
    return 0;
}