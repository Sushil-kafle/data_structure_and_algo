#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{

    int k = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[k], nums[i]);
            k++;
        }
    }
}

int main()
{
    vector<int> v;
    int num;
    while (cin >> num && (v.push_back(num), cin.get() != '\n'))
        ;

    moveZeroes(v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}