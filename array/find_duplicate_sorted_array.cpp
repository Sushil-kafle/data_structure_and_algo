// 3 6 8 8 10 12 12 12 15
// duplicate elements are: 8,12

#include <bits/stdc++.h>
using namespace std;

void find_duplicate(vector<int> &a)
{
    vector<int> freq_table(a[a.size() - 1], 0);

    for (int i = 0; i < a.size(); i++)
    {
        freq_table[a[i]]++;
    }

    for (int i = 0; i < freq_table.size(); i++)
    {
        if (freq_table[i] > 1)
        {
            cout << i << endl;
        }
    }
}

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    find_duplicate(a);

    return 0;
}