// Given two strings s and t, determine if they are isomorphic.
// Input : s = "egg", t = "add" Output : yes
// Input : s = "foo", t = "bar" Output : no

// use two  frequency array initialized with -1

#include <bits/stdc++.h>
using namespace std;

bool is_isomorphic(string s, string t)
{

    vector<int> v1(128, -1);
    vector<int> v2(128, -1);

    // check if size doesnot equal
    if (s.size() != t.size())
    {
        return false;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (v1[s[i]] != v2[t[i]])
        {
            return false;
        }

        v1[s[i]] = i;
        v2[t[i]] = i;
    }
    return true;
}

int main()
{

    string s, t;
    cin >> s >> t;

    if (is_isomorphic(s, t))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}