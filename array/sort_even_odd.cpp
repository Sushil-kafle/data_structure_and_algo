// 1 0 3 2 5 6 7 9 4 11

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    vector<int> a;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int start = 0;
    int end = a.size() - 1;

    while (start < end)
    {
        // if (a[start] % 2 == 0 and a[end] % 2 == 0)
        // {
        //     start++;
        // }

        // if (a[start] % 2 == 1 and a[end] % 2 == 0)
        // {
        //     int temp;
        //     temp = a[start];
        //     a[start] = a[end];
        //     a[end] = temp;

        //     start++;
        //     end--;
        // }

        // if (a[start] % 2 == 0 and a[end] % 2 == 1)
        // {
        //     start++;
        //     end--;
        // }

        // if (a[start] % 2 == 1 and a[end] % 2 == 1)
        // {
        //     end--;
        // }

        if (a[start] % 2 == 0)
        {
            start++;
        }
        else
        {
            swap(a[start], a[end]);
            end--;
        }
    }

    for (auto i : a)
    {
        cout << i << endl;
    }

    return 0;
}