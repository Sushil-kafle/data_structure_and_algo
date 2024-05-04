// 5 6 8 10 20

// 2 3 4 5 6

// 9 23 45 69 78

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int diff = 10;
    int num;
    vector<int> a;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int first = 0;
    int second = first + 1;

    int result = 0;

    while (first < a.size() || second < a.size())
    {
        if (abs(a[first] - a[second]) > diff)
        {
            first++;
        }

        else if (abs(a[first] - a[second]) < diff)
        {
            second++;
        }

        else
        {
            result = 1;
            cout << a[first] << " " << a[second] << endl;
            break;
        }
    }

    cout << result << endl;

    return 0;
}