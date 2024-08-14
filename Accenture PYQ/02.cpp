#include <bits/stdc++.h>
using namespace std;

int sizeDec(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n = 3;
    int arr[] = {5, 7, 5};

    cout << sizeDec(arr, n);
    return 0;
}