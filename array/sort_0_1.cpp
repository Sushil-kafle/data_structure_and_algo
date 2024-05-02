// 0 1 1 0 0 0 0 1 1

// 0 0 0 0 0 1 1 1 1

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a(9);

    for (int &i : a)
    {
        cin >> i;
    }

    // vector<int> ans(9);
    // int j = 0;

    // for (int i = 0; i < ans.size(); i++)
    // {

    //     if (a[i] == 0)
    //     {
    //         ans[j] == 0;
    //         j++;
    //     }
    // }
    // for (j; j < ans.size(); j++)
    // {
    //     ans[j] = 1;
    // }

    // for (auto i : ans)
    // {
    //     cout << i << endl;
    // }

    int start = 0;
    int end = a.size() - 1;

    while (start < end)
    {

        if (a[start] == 1 && a[end] == 0)
        {
            swap(a[start], a[end]);
            start++;
            end--;
        }

        if (a[start] == 1 && a[end] == 1)
        {
            swap(a[start], a[end]);

            end--;
        }

        if (a[start] == 0 && a[end] == 0)
        {
            start++;
        }

        if (a[start] == 0 && a[end] == 1)
        {
            start++;
            end--;
        }
    }
    for (int i : a)
    {
        cout << i << endl;
    }

    return 0;
}