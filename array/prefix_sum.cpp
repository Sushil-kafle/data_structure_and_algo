#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    vector<int> a;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    for (int i = 1; i < a.size();i++)
    {
            a[i] = a[i] + a[i - 1];
    }

     for (auto i : a)
        {
            cout << i << endl;
        }

        return 0;
}