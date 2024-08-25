#include <bits/stdc++.h>
using namespace std;

int minFood(int r, int unit, int arr[], int n)
{
    if (n == 0)
        return -1;

    int totalFood = r * unit;
    int foodTillNow = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (foodTillNow < totalFood)
        {
            foodTillNow += arr[i];
            cnt++;
        }
    }

    if (foodTillNow < totalFood)
    {
        return 0;
    }

    return cnt;
}

int main()
{
    int n = 8;
    int arr[n] = {2, 8, 3, 5, 7, 4, 1, 2};

    int r = 7;
    int unit = 2;

    cout << minFood(r, unit, arr, n);
    return 0;
}