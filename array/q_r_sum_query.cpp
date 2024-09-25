// Given an array of integers of size n.Answer q queries where
// you need to print the sum of values in a given range of indices from l to r(both included)
// Note : The values of l and r in queries follow 1 based indexing.

#include <bits/stdc++.h>
using namespace std;

void create_prefix_sum(vector<int> &a, vector<int> &b)

{

    int sum = a[0];
    b[0] = 0;

    for (int i = 1; i < a.size(); i++)
    {
        sum += a[i];
        b[i] = sum;
    }
}

int query_sum(vector<int> &b, vector<int> &query)
{

    return b[query[1]] - b[query[0]-1];
}

int main()

{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    vector<int> b(a.size());

    vector<int> query = {1,2};

    create_prefix_sum(a, b);

    int res = query_sum(b, query);

    cout << res;

     for (auto i : b)
        {
            cout << i << endl;
        }

    return 0;
}