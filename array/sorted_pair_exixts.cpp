// - 1 - 2 2 3 4 5 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int sum = 6;
    int result = 0;

    int start = 0;
    int end = a.size() - 1;

    while (start < end)
    {
        if (a[start] + a[end] < sum)
        {
            start++;
        }

        else if (a[start] + a[end] > sum)
        {
            end--;
        }

        else
        {
            cout << a[start] << " " << a[end] << endl;
            result = 1;
            break;
        }
    }

    cout << result;

    return 0;
}