#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size_a = 5;
    int size_b = 5;

    vector<int> a(size_a);
    vector<int> b(size_b);

    for (int &i : a)
    {
        cin >> i;
    }

    for (int &i : b)
    {
        cin >> i;
    }

      int ans_size = size_a + size_b;

    vector<int> ans(ans_size);

    for (int i; i < ans.size(); i++)
    {

        if (i < size_a)
        {

            ans[i] = a[i];
        }

        else
        {

            ans[i] = b[ i - size_a];
        }
    }

    for (int i : ans)
    {
        cout << i << endl;
    }

    return 0;
}