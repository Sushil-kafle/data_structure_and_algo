#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int sum = 20;
    bool result = false;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == sum)
            {
                result = true;
                break;
            }
        }
    }

    cout << result;

    return 0;
}