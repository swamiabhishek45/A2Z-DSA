#include<bits/stdc++.h>
using namespace std;

void maxConsecutiveOne(int arr[], int n){
    int cnt = 0;
    int maxi = 0;
    for(int i = 0; i<n;i++){
        if(arr[i] == 1){
            cnt++;
        }else{
            cnt = 0;
        }
        maxi = max(maxi, cnt);
    }
    cout << maxi;
}

    int
    main()
{
    int n = 6;
    int arr[] = {1, 1, 0, 1, 1, 1};

    maxConsecutiveOne(arr, n);
     return 0;
}