#include <bits/stdc++.h>
using namespace std;

void merge_array(vector<int> &a, vector<int> &b, vector<int> &c)
{

    int ptr1 = 0;
    int ptr2 = 0;

    for (int i = 0; i < (a.size() + b.size()); i++)
    {
        if (ptr1 >= a.size())
        {
            c[i] = b[ptr2];
            ptr2++;
        }

        else if (ptr2 >= b.size())
        {
            c[i] = a[ptr1];
            ptr1++;
        }
        else if (a[ptr1] < b[ptr2])
        {
            c[i] = a[ptr1];
            ptr1++;
        }
        else if (a[ptr1] > b[ptr2])
        {
            c[i] = b[ptr2];
            ptr2++;
        }
    }
}

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    vector<int> b;
    while (cin >> num && (b.push_back(num), cin.get() != '\n'))
        ;

    vector<int> c(a.size() + b.size(), 0);

    merge_array(a, b, c);

    for (auto i : c)
    {
        cout << i << endl;
    }

    return 0;
}