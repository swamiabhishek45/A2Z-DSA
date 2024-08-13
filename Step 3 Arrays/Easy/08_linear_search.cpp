#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int num)
{
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
    }return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    int num = 3;
    cout << linearSearch(arr, n, num);
    return 0;
}