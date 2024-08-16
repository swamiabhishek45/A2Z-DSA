#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
            {
                cnt++;
            }
        }
    }

    if (cnt == 2)
    {
        return true;
    }
    else
    {

        return false;
    }
}

int main()
{
    int n = 3;

    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }

    cout << "Sum: " << sum;
    return 0;
}