#include<bits/stdc++.h>
using namespace std;

int swap_max_min(int arr[], int n){
    int max = INT_MIN;
    int min = INT_MAX;

    

    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }
    swap(max, min);
}

int main()
{
    int n = 5;
    int arr[n] = {4,7,8,2,1};

    swap_max_min(arr, n);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}