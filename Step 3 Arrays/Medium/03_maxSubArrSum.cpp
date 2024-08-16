#include <bits/stdc++.h>
using namespace std;

// Bruteforce --> O(n^3) O(1)
int maxSubArr(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

// Better --> O(n^2) O(1)
int maxSubArray(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

// Optimal --> O(n) O(1)
int maxiSubArrSUm(int arr[], int n)
{
    int maxi = INT_MIN, sum = 0;
    int start;
    int arrS = -1;
    int arrE = -1;

    for (int i = 0; i < n; i++)
    {

        if (sum == 0)
            start = i;

        sum = sum + arr[i];

        if (sum > maxi)
        {
            maxi = sum; // maxi = max(maxi, sum);

            arrS = start;
            arrE = i;
        }

        if (sum < 0)
            sum = 0;
    }

    cout << "Max Sub Array Sum: ";
    for (int i = arrS; i <= arrE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return maxi;
}

int main()
{
    int n = 8;
    int arr[n] = {-2, -3, 4, -1, 1, -2, 5, -3};

    cout << "MaxSum: " << maxiSubArrSUm(arr, n);
    return 0;
}