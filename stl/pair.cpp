#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> p = {1, 2};

    cout << p.first << "\t";
    cout << p.second << endl;

    pair<int, pair<int, int>> q = {1, {2, 3}};

    cout << q.first << "\t" << q.second.first << "\t" << q.second.second;

    return 0;
}
