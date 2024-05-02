// sum =9
// 1 2 3 4 5 7 9

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a(7);

    for (int &i : a)
    {
        cin >> i;
    }

    vector<pair<int, int>> ans;

    for (int i = 0; i < a.size(); i++)
    {

        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == 9)
            {
                ans.push_back({a[i], a[j]});
            }
        }
    }

    for (auto &i : ans)
    {

        cout << i.first << " " << i.second << endl;
    }

    return 0;
}