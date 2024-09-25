#include <bits/stdc++.h>
using namespace std;

int find_missing(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] - a[i] != 1)
        {
            return (a[i + 1] + a[i]) / 2;
        }
    }

    return -1;
}

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

        cout << find_missing(a);

    return 0;
}