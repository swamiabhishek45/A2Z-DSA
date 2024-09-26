#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    cout << vec[1] << endl;

    vector<int> zero(4, 0);
    cout << zero[0] << endl;
    cout << zero[1] << endl;
    cout << zero[2] << endl;
    cout << zero[3] << endl;

    vector<char> name(3, 'A');
    for (char val : name)
    {
        cout << val << endl;
    }

    vector<int> num;

    cout << "size: " << num.size() << endl;

    num.push_back(24);
    num.push_back(23);
    num.push_back(54);

    cout << num[0] << " " << num[1] << " " << num[2] << endl;

    int arr[5];

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << size << endl;

    return 0;
}