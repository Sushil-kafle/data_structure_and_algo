
#include <bits/stdc++.h>
using namespace std;

bool check_palidrome(string s)
{

    int first = 0, last = s.size() - 1;

    while (last > first)
    {
        if (s[first] != s[last])
        {
            return false;
        }

        last--;
        first++;
    }

    return true;
}

int main()
{

    string s1;
    cin >> s1;

    if (check_palidrome(s1))
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}