#include <bits/stdc++.h>
using namespace std;

int findCount(int num, int diff, int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(abs(arr[i] - num) <= diff){
            count++;
        }
    }

    return count > 0 ? count : -1;
}

    int
    main()
{
    int n = 6;
    int arr[n] = {12, 3, 14, 56, 77, 13};
    int num = 13;
    int diff = 2;
    cout << findCount(num, diff, arr, n);
    return 0;
}