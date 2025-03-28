#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string new_str;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'X' )
        {
            new_str.push_back(s[i]);
        }

    }

    cout << new_str;

    return 0;
}