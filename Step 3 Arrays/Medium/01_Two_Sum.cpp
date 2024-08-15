#include <bits/stdc++.h>
using namespace std;

int twoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] + arr[i] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n = 5;
    int arr[] = {2, 6, 5, 8, 11};
    int target = 15;

    if (twoSum(arr, n, target))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}