// 3 4 6 7 1 2 5
// 3 4 6 7 1 10 5 10

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int largest_number = -1;
    int second_largest = -1;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > largest_number)
        {
            second_largest = largest_number;

            largest_number = a[i];
        }
        if (a[i] > second_largest && a[i] < largest_number)
        {
            second_largest = a[i];
        }
    }

    cout << second_largest;

    return 0;
}