#include <bits/stdc++.h>
using namespace std;

int sizeDec(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0 && arr[i] % 3 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n = 3;
    int arr[] = {1, 3, 0};
    cout << sizeDec(arr, n);
    return 0;
}