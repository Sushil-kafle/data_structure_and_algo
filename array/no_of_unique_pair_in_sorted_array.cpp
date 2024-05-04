#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    int num;

      while (cin >> num && (a.push_back(num), cin.get() != '\n'))
            ;

    int  sum = 4;
    int unique = 0;

    int first = 0;
    int last = a.size() - 1;

    while (first < last)
    {
        if (a[first] + a[last] > sum )
        {
            last--;
        }
        else if (a[first]+ a[last] < sum)
        {
            first++;
        }
        else{

            cout << a[first] << " " << a[last] << endl;
            unique++;
            first++;
            last--;
        }
    }

    cout << unique << endl;

    return 0;
}