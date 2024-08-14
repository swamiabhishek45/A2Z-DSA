#include <bits/stdc++.h>
using namespace std;

// Brutforce
void findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> st; // declare set which takes unique elements
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }

    int uni[st.size()]; // uni array of size = set size

    int i = 0;
    for (auto it : st)
    {
        uni[i++] = it;
    }

    for (int i = 0; i < st.size(); i++)
    {
        cout << uni[i] << " ";
    }
}

// Optimal
void unionOfArray(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> Union;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        { // Case 1 and 2
            if (Union.size() == 0 || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else
        { // case 3
            if (Union.size() == 0 || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (Union.back() != arr1[i])
        {
            Union.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }
        j++;
    }

    for (auto &val : Union)
    {
        cout << val << " ";
    }
}

int main()
{
    int n = 5;
    int arr1[] = {1, 2, 2, 4, 4};
    int m = 4;
    int arr2[] = {2, 3, 4, 5};

    // findUnion(arr1, arr2, n, m);
    unionOfArray(arr1, arr2, n, m);

    return 0;
}