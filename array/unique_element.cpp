// every element except one occur twice

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size = 7;
    vector<int> a(size);

    for (int &i : a)
    {
        cin >> i;
    }

    int unique_ = 0;

    for (int i = 0; i < a.size(); i++)
    {

        unique_ = a[i] ^ unique_;

        cout << unique_ << " ";
    }
    cout << endl;

    cout << unique_;

    return 0;
}