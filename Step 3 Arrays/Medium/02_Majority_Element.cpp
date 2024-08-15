#include <bits/stdc++.h>
using namespace std;

// BruteForce --> O(n^2)
int majorityElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt > (n / 2))
            return arr[i];
    }
}

// Better -> O(nlogn) O(n)

int usingMap(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto val : m)
    {
        if (val.second > n / 2)
        {
            return val.first;
        }
    }
    return -1;
}

// Optimal --> O(2n) O(1)

int majorElement(int arr[], int n)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            cnt1++;
        }
    }

    if (cnt1 > n / 2)
        return el;

    return -1;
}

int main()
{
    int n = 7;
    int arr[] = {2, 2, 3, 3, 1, 2, 2};

    cout << majorElement(arr, n);
    return 0;
}