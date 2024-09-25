#include <bits/stdc++.h>
using namespace std;

void change_case(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' )
        {
            s[i] -= 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
}

int main()
{

    string s;
    cin >> s;

    change_case(s);

    cout << s;

    return 0;
}