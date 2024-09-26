#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;

    int arr[n] = {5, 14, 22, 1, -24, 2};

    int largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << largest;
    return 0;
}