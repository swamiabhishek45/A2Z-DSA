#include<bits/stdc++.h>
using namespace std;

int reverseOrder(vector<int> &v){
    int s = 0;
    int e = v.size() - 1;

    while(s < e){
        swap(v[s++], v[e--]);
    }
} 

int main()
{
    vector<int> v = {1,2,3,4,5};

    for(int val: v){
        cout << val << " ";
    }
    cout << endl;
    reverseOrder(v);

    for(int val: v){
        cout << val << " ";
    }
    
    return 0;
}