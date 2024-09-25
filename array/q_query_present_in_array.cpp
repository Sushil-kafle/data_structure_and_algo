// number is less than 10e5
// 1 1 2 2 2 3 4 5

#include <bits/stdc++.h>
using namespace std;

void freq_vector(vector<int> &a, vector<int> &freq)

{
    for (int i = 0; i < a.size(); i++)
    {

        freq[a[i]] += 1;
    }
}

int main()
{
    vector<int> a;

    int num;

    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    vector<int> q = {1, 2, 10};

    const int N = 10e5;
    vector<int> freq(N, 0);

    freq_vector(a, freq);

    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i] << " " << freq[q[i]] << endl;
    }

    return 0;
}