// 0 1 1 0 0 0 0 1 1

// 0 0 0 0 0 1 1 1 1

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a(9);

    for (int &i : a)
    {
        cin >> i;
    }

    int start = 0;
    int end = a.size() - 1;

    // while (start < end)
    // {

    //     if (a[start] == 1 && a[end] == 0)
    //     {
    //         swap(a[start], a[end]);
    //         start++;
    //         end--;
    //     }

    //     if (a[start] == 1 && a[end] == 1)
    //     {
    //         swap(a[start], a[end]);

    //         end--;
    //     }

    //     if (a[start] == 0 && a[end] == 0)
    //     {
    //         start++;
    //     }

    //     if (a[start] == 0 && a[end] == 1)
    //     {
    //         start++;
    //         end--;
    //     }
    // }

    while (start < end)
    {
        if (a[start] == 0)
        {
            start++;
        }
        else if (a[start] == 1)
        {
            swap(a[start], a[end]);
            end--;
        }
    }

    for (int i : a)
    {
        cout << i << endl;
    }

    return 0;
}