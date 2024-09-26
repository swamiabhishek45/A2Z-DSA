#include<bits/stdc++.h>
using namespace std;

void sumProd(int arr[], int n){
    int sum = 0, prod = 1;

    for(int i = 0; i<n; i++){
        sum += arr[i];
        prod *= arr[i];
    }

    cout << "SUM: " << sum << endl;
    cout << "PROD: " << prod;
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    sumProd(arr, n);
    return 0;
}