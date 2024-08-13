#include <bits/stdc++.h>
using namespace std;

// BruteForce --> O(2n) O(n)
void moveZerosToEnd(int arr[], int n)
{
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();

    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }

    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }
}

// Optimal --> O(n) O(1)
void zerosToEnd(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 0, 1, 0, 4, 0};

    // moveZerosToEnd(arr, n);
    zerosToEnd(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}