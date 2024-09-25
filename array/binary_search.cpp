#include <bits/stdc++.h>
using namespace std;

int binray_search(vector<int> &a, int key)
{
    int start = 0;
    int last = a.size() - 1;

    int mid;

    while (last >= start)
    {
        mid = (start + last) / 2;
        if (a[mid] > key)
        {
            last = mid - 1;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else if (a[mid] == key)
        {
            return mid;
        }
    }

    return -1;
}

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;
    int res, key = 7;

    res = binray_search(a, 7);
    if (res == -1)
    {
        cout << "not found";
    }
    else
    {
        cout << res;
    }

    return 0;
}