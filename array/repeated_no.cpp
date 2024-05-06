// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n) inclusive.
// There is only one repeated number in nums , retum this repeated number.
// You must solve the problem without modifying the array nuns and uses only constant extra space.

// 1 2 3 4 3 6 7 5 => 3

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    vector<int> a;

    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int sum = 0;

    int index = 0;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     index = a[i];
    //     if (a[index] != -1)
    //     {
    //         a[i] = -1;
    //     }
    //     else
    //     {
    //         cout << a[i];
    //         break;
    //     }
    // }

    while(true)
    {
        if(a[0] != a[a[0]])
        {
            swap(a[0], a[a[0]]);
        }

        else
        {
            cout << a[0];
            break;
        }
    }

    return 0;
}