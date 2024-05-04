// - 4 - 3 - 1 0 2 5 10
// - 5 - 4 - 3 - 2 - 1
//  0 1 2 3

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int first = 0;
    int last = a.size() - 1;

    vector<int> ans(a.size());

    for (int i = a.size() - 1; i >= 0; i--)
    {

        if (a[first] * a[first] > a[last] * a[last])
        {
            ans[i] = a[first] * a[first];
            first++;
        }
        else
        {

            ans[i] = a[last] * a[last];
            last--;
        }
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}