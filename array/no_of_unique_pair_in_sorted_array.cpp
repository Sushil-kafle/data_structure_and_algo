// 1,2,3,4,5,6,7 sum=6
// output = 1,5 and 2,4

#include <bits/stdc++.h>
using namespace std;




int main()
{

    vector<int> a;
    int num;

    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    int sum = 6;

    int first = 0;
    int last = a.size() - 1;

    while (first < last)
    {
            if(a[first]+ a[last] > sum)
            {
                last--;
            }
            else if(a[last] + a[first] < sum)

            {
                first++;
            }
            else {
                cout << a[first] << " " << a[last] << endl;

                first++;
                last--;
            }

    }
    

    return 0;
}