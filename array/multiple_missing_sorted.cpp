// find multiple missing element in sorted array
// 1 2 3 6 7 9
// here 4,5,8 are missing

#include <bits/stdc++.h>
using namespace std;

vector<int> find_multiple_missing(vector<int> &a)
{

    int total = (a[a.size() - 1] - a[0]) - (a.size() - 1);
    vector<int> res(total, 0);
    int index = 0;

    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] - a[i] != 1)
        {

            for (int j = a[i] + 1; j < a[i + 1]; j++)
            {
                res[index] = j;
                index++;
            }
        }
    }

    return res;
}

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    vector<int> missing_elements = find_multiple_missing(a);

    for (auto i : missing_elements)
    {
        cout << i << endl;
    }

    return 0;
}