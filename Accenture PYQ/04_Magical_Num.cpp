#include <bits/stdc++.h>
using namespace std;

int findMagicalNumber(int n)
{
    if(n==0) return 0;
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        int sum = 0;
        int j = i;
        while(j>0){
            if(j&1){
                sum+=2;
            }else{
                sum+=1;
            }
            j = j>>1;
        }
        if(sum % 2 == 1) cnt++;
    }

    return cnt;
}

int main()
{
    int n = 5;
    cout << findMagicalNumber(n);
    return 0;
}