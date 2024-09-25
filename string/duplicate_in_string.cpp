#include <bits/stdc++.h>
using namespace std;

void check_duplicate(string s)
{
    vector<int> v(128, 0);

    for (int i = 0; i < s.size(); i++)
    {
        if (v[s[i]] >= 1)
        {
            cout << s[i] << endl;
        }
        v[s[i]]++;
    }
}

int main()
{

    string s;

    cin >> s;

    check_duplicate(s);

    return 0;
}