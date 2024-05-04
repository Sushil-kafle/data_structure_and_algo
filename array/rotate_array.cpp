// 3 4 6 7 1 2 5
// 3 4 6 7 1 10 5 10
// 1 2 3 4 5

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    vector<int> a;

    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int rotate = 7;
    vector<int> ans(a.size());

    rotate =  rotate %a.size();

    for (int i = 0; i < rotate; i++)
    {
        ans[i] = a[a.size() - rotate + i];
    }

    for (int i = rotate; i < ans.size(); i++)
    {
        ans[i] = a[i - rotate];
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}