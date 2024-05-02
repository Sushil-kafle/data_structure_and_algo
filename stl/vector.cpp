#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    a.push_back(5);

    cout << a[0] << endl;

    vector<int> b(5, 1);

    cout << b[0] << "\t" << b[1] << "\t" << b[2] << "\t" << endl;

    vector<int> c(15);

    cout << c[0] << "\t" << c[1] << "\t" << c[2] << "\t" << endl;

    vector<int> d(b);

    cout << d[0] << "\t" << d[1] << "\t" << d[2] << "\t" << endl;

 for ( auto it : d)
 {
     cout << it << "\t";
 }

 cout << endl;
 cout << d.size();
 return 0;
}