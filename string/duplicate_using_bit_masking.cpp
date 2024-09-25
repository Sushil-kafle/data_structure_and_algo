#include <bits/stdc++.h>
using namespace std;

void check_duplicate(string s)
{
    int32_t h = 0, x = 0;

    for (int i = 0; i < s.size(); i++)
    {
        x = 1;
        x = x << s[i] - 97;

        // cout << bitset<32> (x) << endl;

        if (x & h > 0)
        {
            cout << "duplicate" << endl;
        }
        else
        {
            h = h | x;
        }
    }
}

int main()
{

    string s;
    cin >> s;

    check_duplicate(s);

    return 0;
}