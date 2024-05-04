// number is less than 10e5
// 1 1 2 2 2 3 4 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;

    int num;

    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    vector<int> q = {1, 2, 10};

    const int N = 1e5 + 10;

    vector<int> freq(N, 0);

    for (int i = 0; i < a.size(); i++)
    {
        freq[a[i]] = freq[a[i]] + 1;
    }

    for (int i = 0; i < q.size(); i++)
    {
        cout << freq[q[i]] << " ";
    }

    return 0;
}