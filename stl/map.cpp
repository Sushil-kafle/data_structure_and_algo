#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> a;

    a.insert({1, "susil"});

    a[2] = "new";

    cout << a[1] << endl;

    for (auto it :a)
    {
        cout << it.first << "\t" << it.second << "\t";
    }

    return 0;
}