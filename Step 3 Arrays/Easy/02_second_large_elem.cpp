#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach --- O(nlogn)
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void secondLarge(int arr[], int n)
{
    bubbleSort(arr, n);
    // sort(arr, arr+n);

    if (n == 0 || n == 1)
    {
        cout << -1;
    }

    cout << endl
         << "Second Smallest : " << arr[1];
    cout << endl
         << "Second Largest : " << arr[n - 2] << endl;
}

// Better approach --- O(2n)

void secndLargest(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        cout << -1 << endl;
    }

    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "Second Largest " << secondLargest << endl;
}

// Optimal approach
int secondSmallest(int arr[], int n)
{
    if (n < 2)
        return -1;

    int small = INT_MAX;
    int second_small = INT_MAX;

    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    return second_small;
}
int secondLargest(int arr[], int n)
{

    int large = INT_MIN;
    int second_large = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] < large)
        {
            second_large = arr[i];
        }
    }
    return second_large;
}

int main()
{
    int arr[] = {4, 22, 7, 5, 32, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    secondLarge(arr, n);

    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);

    cout << "Second smallest is " << sS << endl;
    cout << "Second largest is " << sL << endl;

    secndLargest(arr, n);
    return 0;
}