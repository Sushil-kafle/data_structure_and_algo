// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Constraints : String s and t will only contain lowercase alphabetical characters.
// Input 1 : s = "anagram", t = "nagaram"
//  Output 1 : yes
//  Input 2 : s = "bank", t = "atm
// Output 2 : no

// use frequency array

#include <bits/stdc++.h>
using namespace std;
#define initial 97

bool is_anagram(string s, string t)
{
    vector<int> temp(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        temp[s[i] - initial]++;
        temp[t[i] - initial]--;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string s, t;
    cin >> s >> t;

    if (is_anagram(s, t))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}