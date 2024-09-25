// Input : nums = [ 2, 0, 2, 1, 1, 0 ]
// Output : [ 0, 0, 1, 1, 2, 2 ]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int low = 0;
    int middle = 0;

    int high = a.size() - 1;

    while (middle <= high)
    {

        if (a[middle] == 0)
        {
            swap(a[middle], a[low]);
            low++;
            middle++;
        }

        else if (a[middle] == 1)
        {
            middle++;
        }

        else
        {
            swap(a[middle], a[high]);
            high--;
        }
    }

    for (auto i : a)
    {
        cout << i << endl;
    }

    return 0;
}