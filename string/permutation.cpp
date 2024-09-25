#include <bits/stdc++.h>
using namespace std;

void permut(string s1, int k)
{

    static string result(s1.size(), ' ');
    static vector<int> flag(3, 0);

    if (k == s1.length())
    {
        cout << result << endl;

        return;
    }
    else
    {

        for (int i = 0; i < s1.size(); i++)
        {

            if (flag[i] == 0)
            {
                result[k] = s1[i];
                flag[i]++;
                permut(s1, k + 1);
                flag[i] = 0;
            }
        }
    }
}

int main()
{

    string s1;
    cin >> s1;

    permut(s1, 0);

    return 0;
}