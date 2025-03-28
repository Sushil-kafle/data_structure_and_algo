#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int min = v[i];
        int idx = i;

        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < min)
            {
                min = v[j];
                idx = j;
            }
        }

        swap(v[i], v[idx]);
    }
}

int main()
{

    vector<int> v;
    int num;
    while (cin >> num && (v.push_back(num), cin.get() != '\n'))
        ;

    selection_sort(v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}