#include <bits/stdc++.h>
using namespace std;

int missingNo(int arr[], int n)
{
    int sum = (n * (n + 1)) / 2;

    int s2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s2 = s2 + arr[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int n = 11;
    int arr[] = {4, 6, 7, 9, 2, 1, 8, 11, 10, 3};

    cout << missingNo(arr, n);
    return 0;
}