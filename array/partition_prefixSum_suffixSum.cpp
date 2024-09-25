// 6 2 4 3 1
// 0 5 4 3 1 2 3
// 1 2 32 12 12 44 32

#include <bits/stdc++.h>
using namespace std;

bool check_prefix_sum(vector<int> &a)
{

    int start = 0;
    int end = a.size() - 1;

    int prefix_sum = a[start], suffix_sum = a[end];

    while (start < end)
    {
        if (prefix_sum > suffix_sum)
        {
            end--;
            suffix_sum += a[end];
        }
        else if (prefix_sum < suffix_sum)
        {
            start++;
            prefix_sum += a[start];
        }

        else if (prefix_sum == suffix_sum)
        {
            cout << a[start] << " " << a[end];
            return true;
        }

        else
        {
            return false;
        }
    }
}

int main()
{

    vector<int> a;
    int num;

    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    bool res;

    res = check_prefix_sum(a);

  
    if(!res){
        cout << "not found ";
    }

    return 0;
}