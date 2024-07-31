#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach --> O(n^2) | O(1)
bool isSorted(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[i]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int arr[]= {66,0,1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool ans = isSorted(arr, n);

    if(ans) cout << "True | Array is sorted" << endl;
    else cout << "False | Array is not sorted" << endl;
    return 0;
}