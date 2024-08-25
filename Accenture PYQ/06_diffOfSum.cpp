#include <bits/stdc++.h>
using namespace std;

int differenceofSum(int n, int m)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
        {
            sum1 += i;
        }
        else
        {
            sum2 += i;
        }
    }

    if (sum2 > sum1)
    {
        return sum2 - sum1;
    }
    else
    {
        return sum1 - sum2;
    }
}

int main()
{
    int n = 3;
    int m = 10;
    cout << differenceofSum(n, m);
    return 0;
}