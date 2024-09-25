// 2 3 1 6 9 7
// 4,5 and 8 are missing
// create hash table/bit-set to solve in O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> find_missing(vector<int> &a)
{
    int min = 10e5, max = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    vector<int> hash_table(max, -1);

    for (int i = 0; i < a.size(); i++)
    {
        hash_table[a[i]] = 1;
    }

    int index = 0;
    vector<int> result(max - min, 0);

    for (int i = min + 1; i < max; i++)
    {
        if (hash_table[i] == -1)
        {
            result[index] = i;
            index++;
        }
    }

    return result;
}

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    vector<int> result = find_missing(a);

    for (auto i : result)
    {
        cout << i << endl;
    }

    return 0;
}