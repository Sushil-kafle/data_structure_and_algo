#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size = 6;
    int a[size] = {1, 2, 3, 4,5,6};

    // for (int i = 0; i < size / 2; i++)
    // {
    //     cout << a[i] << " " << a[size - (i + 1)];

    //     cout << endl;
    // }
    // if (size % 2 != 0)
    // {
    //     cout << a[int(size / 2)];
    // }

    int start = 0;
    int end = size - 1;

    while (start < end)
    {

        cout << a[start] << " " << a[end] << endl;
        start++;
        end--;
    }
    if (start == end)
    {
        cout << a[start];
    }

    return 0;
}