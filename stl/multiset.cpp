#include<bits/stdc++.h>
using namespace std;

int main()
{

    multiset<int> a;

    a.insert(10);
    a.insert(20);
    a.insert(40);
    a.insert(30);
    a.insert(30);

    for (int i:a)
    {
        cout << i << "\t";
    }

    a.erase(30);
    cout << endl;
    
    for (int i:a)
    {
        cout << i << "\t";
    }

    return 0;
}