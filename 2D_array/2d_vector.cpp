#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a,b;      
    int num;
      while (cin >> num && (a.push_back(num), cin.get() != '\n'))
            ;

      while (cin >> num && (b.push_back(num), cin.get() != '\n'))
            ;
      vector<vector<int>>  v= {a, b};


       for (auto i : v)
          {
              for (auto j:i)
              {
                  cout << j << " ";
              }

              cout << endl;
          }

      return 0;
}