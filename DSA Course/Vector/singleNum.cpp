#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 1, 2, -1, -2};
    int ans = 0;

    for (int val : v)
    {
        ans += val;
    }

    cout << ans;

    return 0;
}