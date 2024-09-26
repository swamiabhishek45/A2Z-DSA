#include <bits/stdc++.h>
using namespace std;

int reverseArr(int arr[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{
    int n = 7;
    int arr[n] = {4, 2, 7, 8, 1, 2, 5};

    reverseArr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}