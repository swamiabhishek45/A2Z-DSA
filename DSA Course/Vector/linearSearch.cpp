#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &v, int target){
    for(int i = 0; i< v.size(); i++){
        if(v[i] == target){
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {4,7,8,2,3};
    int target = 2;
    cout << linearSearch(v, target);
    return 0;
}