// sum =9
// 1 2 3 4 5 7 9

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int sum = 9;

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int start = 0;
    int end = a.size() - 1;

    while (start < end)
    {
        if ((a[end] + a[start]) > sum)
        {
            end--;
        }
        else if ((a[end] + a[start]) < sum)
        {
            start++;
        }
        else
        {
            cout << a[start] << "\t" << a[end] << endl;
            start++;
            end--;
        }
    }

    return 0;
}