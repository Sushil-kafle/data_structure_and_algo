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

    int largest_1 = INT_MIN;
    int largest_2 = -INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)

            if (a[i] + a[j] > largest_1 + largest_2)
            {
                if (a[i] != a[j])
                {

                    largest_1 = a[i];
                    largest_2 = a[j];
                }
            }
    }

    if (largest_1 > largest_2)
        cout << largest_2;
    else
        cout << largest_1;

    return 0;
}