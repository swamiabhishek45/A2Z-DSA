#include <bits/stdc++.h>
using namespace std;

// Bruteforce --> O(n^3)
int markRow(int a[3][3], int i, int m)
{
    for (int j = 0; j < m; j++)
    {
        if (a[i][j] != 0)
        {
            a[i][j] = -1;
        }
    }
}
int markCol(int a[3][3], int j, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i][j] != 0)
        {
            a[i][j] = -1;
        }
    }
}

int setMatrixZero(int a[3][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                markRow(a, i, m);
                markCol(a, j, n);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == -1)
            {
                a[i][j] = 0;
            }
        }
    }
}

// Optimal --> O(n^2) O(n+m)
int setZeros(int a[3][3], int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(row[i] == 1 || col[j] == 1){
                a[i][j] = 0;
            }
        }
    }
}

int main()
{
    int a[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    // setMatrixZero(a, 3, 3);
    setZeros(a, 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
    }

    return 0;
}