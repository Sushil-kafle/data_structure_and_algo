#include<bits/stdc++.h>
using namespace std;


void create_prefix_sum(vector<int> &a)
{

    for (int i = 1; i < a.size(); i++)
    {
        a[i] = a[i] + a[i - 1];
    }
}

int main()
{

    int num;
    vector<int> a;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    create_prefix_sum(a);

    for (auto i : a)
    {
        cout << i << endl;
        }

        return 0;
}