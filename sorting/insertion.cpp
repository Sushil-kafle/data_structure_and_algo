#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;

        while (j >= 1)
        {
            if (v[j] >= v[j - 1])
                break;

            if (v[j] < v[j - 1])
                swap(v[j], v[j - 1]);

            j--;
        }
    }
}

int main()
{

    vector<int> v;
    int num;
    while (cin >> num && (v.push_back(num), cin.get() != '\n'))
        ;

    insertion_sort(v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}