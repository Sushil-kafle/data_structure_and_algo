#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    vector<int> a;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int sum = 13;
    int result = 0;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {

                if (a[i] + a[j] + a[k] == sum)
                {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                    result++;
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}