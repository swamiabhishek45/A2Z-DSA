#include <bits/stdc++.h>
using namespace std;

// Optimal --> O(N) O(N)
vector<int> RearrangeElements(vector<int> &arr, int n)
{
    vector<int> ans(n, 0);

    int posInd = 0, negInd = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negInd] = arr[i];
            negInd += 2;
        }          
        else
        {
            ans[posInd] = arr[i];
            posInd += 2;
        }
    }

    return ans;
}

int main()
{
    int n = 4;
    vector<int> arr{1, 2, -4, -5};

    vector<int> ans = RearrangeElements(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}