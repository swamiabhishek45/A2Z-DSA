#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0) return -1;

    int j = 1;
    for (int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]){
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}

int main()
{
    int n = 8;
    int arr[n] = {1, 1, 1, 2, 2, 3, 3,4};

    cout << removeDuplicates(arr, n);
    return 0;
}