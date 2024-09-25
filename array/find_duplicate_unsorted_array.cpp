// 6 3 8 8 10 15 12 12
// duplicate are 8,12

#include <bits/stdc++.h>
using namespace std;

void find_duplicate(vector<int> &a)
{
    // find max element

    int max = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    // create hash table
    vector<int> hash_table(max, 0);
    for (int i = 0; i < a.size(); i++)
    {
        hash_table[a[i]]++;
    }

    // check duplicate
    for (int i = 0; i < hash_table.size(); i++)
    {
        if (hash_table[i] > 1)
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