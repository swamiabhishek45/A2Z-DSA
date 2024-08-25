#include <bits/stdc++.h>
using namespace std;

int checkPrime(int s)
{
    if (s <= 1)
        return false;
    for (int i = 2; i <= sqrt(s); i++)
    {
        if (s % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    int ans = checkPrime(sum);

    cout << (ans ? "YES" : "NO");

    return 0;
}