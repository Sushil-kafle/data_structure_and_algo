#include<bits/stdc++.h>
using namespace std;

int main()
{

    deque<int> a;

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    a.push_front(40);

    for (int i:a)
    {
        cout << i << "\t";
    }

    cout << endl;

    a.pop_back();

    for (int i:a)
    {
        cout << i << "\t";
    }
    cout << endl;

    a.pop_front();

    for (int i:a)
    {
        cout << i << "\t";
    }

    return 0;
}