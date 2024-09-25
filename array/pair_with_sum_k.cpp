// 6,3,8,10,16,7,5,2,9,14
// sum=10
// ans =(3,7),(8,2),(5,5)

#include <bits/stdc++.h>
using namespace std;

void find_pair_sum(vector<int> &a, int sum)
{
    // create hash_table

    vector<int> hash_table(100, 0);

    for (int i = 0; i < a.size(); i++)
    {
        hash_table[a[i]]++;
    }

    // check for sum

    for (int i = 0; i < a.size(); i++)
    {
        int require = sum - a[i];
        if (hash_table[require] == 1)
        {
            cout << a[i] << " " << require << endl;
            hash_table[require] = 0;

            // for removing duplicate
            hash_table[a[i]] = 0;
        }
    }
}

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int sum = 10;
    find_pair_sum(a, 10);

    return 0;
}