#include<bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> a;

    a.insert(10);
    a.insert(20);
    a.insert(40);
    a.insert(30);
    a.insert(30);

    for (int i : a)
    {
        cout << i << "\t";
    }

    return 0;
}