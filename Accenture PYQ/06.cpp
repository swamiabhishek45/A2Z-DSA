#include <bits/stdc++.h>
using namespace std;

int differenceofSum(int n, int m)
{
    int sum1 = 0, sum2 = 0;
    for(int i = 1; i<=n; i++){
        if(i % m == 0){
            sum1 += i;
        } else {
            sum2 += i;
        }
    }

    int ans = sum2 - sum1;
    return ans;
}

int main()
{
    cout << differenceofSum(10, 3);
    return 0;
}