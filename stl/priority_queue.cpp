#include<bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int> a;

    a.push(10);
    a.push(20);
    a.push(7);
    a.push(15);

    cout << a.top();

    return 0;
}