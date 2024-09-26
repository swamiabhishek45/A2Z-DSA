#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(33);
    v.push_back(33);

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    return 0;
}