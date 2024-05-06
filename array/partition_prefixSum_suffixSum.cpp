// 6 2 4 3 1
// 0 5 4 3 1 2 3
// 1 2 32 12 12 44 32

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    int num;

    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int start = 0;
    int end = a.size() - 1;

    int prefix_sum = a[start];
    int suffix_sum = a[end];

    // 5 4

    while (start < end)
    {

        if (prefix_sum > suffix_sum)
        {
            end--;
            suffix_sum += a[end];
        }

        else if (suffix_sum > prefix_sum)
        {
            start++;
            prefix_sum += a[start];
        }
        else
        {
            start++;
            end--;
            suffix_sum += a[end];
            prefix_sum += a[start];
        }
    }

    if (end == start)
    {
        cout << "no partition exists";
    }
    else
    {

        cout << a[end] << " " << a[start];
    }
    return 0;
}