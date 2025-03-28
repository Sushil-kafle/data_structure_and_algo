#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v)

{
    int flag = 0;
    int pass = 0;

    for (int i = v.size() - 1; i > 0 && flag == 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = 0;
            }
        }

        pass++;
    }

    cout << "total element: " << v.size() << endl;
    cout << "total pass: " << pass << endl;
}

int main()
{

    vector<int> v;
    int num;
    while (cin >> num && (v.push_back(num), cin.get() != '\n'))
        ;

    bubble_sort(v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}