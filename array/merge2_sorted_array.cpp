// 1 3 5
// 2 4 6

// 1 6 7 10
// 0 1 3 8 11

// 10 11
// 1 2 3

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a, b;

    int num;
    while (cin >> num)
    {
        a.push_back(num);
        if (cin.peek() == '\n')
            break;
    }

    while (cin >> num)
    {
        b.push_back(num);
        if (cin.peek() == '\n')
            break;
    }

    int m = a.size(), n = b.size();

    int index_a = 0, index_b = 0;
    vector<int> ans(m + n);

    for (int i = 0; i < ans.size(); i++)
    {
        if (index_b == n || index_a < m && a[index_a] < b[index_b])
        {
            ans[i] = a[index_a];
            index_a++;
        }
        else
        {
            ans[i] = b[index_b];
            index_b++;
        }
    }

    for (int i : ans)
    {
        cout << i << endl;
    }

    return 0;
}