#include <bits/stdc++.h>
using namespace std;

int stockBuySell(int arr[], int n)
{
    int maxPro = 0, minPrice = INT_MAX;

    for(int i = 0; i<n; i++){
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }

    return maxPro;
}

int main()
{
    int n = 6;
    int arr[] = {7, 1, 5, 3, 6, 4};

    cout << stockBuySell(arr, n);
    return 0;
}