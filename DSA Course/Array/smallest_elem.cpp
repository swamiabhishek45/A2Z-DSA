#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {5, 15, 22, 1, -15, 24};

    int small = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    cout << small;
    return 0;
}