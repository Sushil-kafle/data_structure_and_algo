#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    vector<int> a;

      while (cin >> num && (a.push_back(num), cin.get() != '\n'))
            ;

      int left = 0;
      int right = a.size() - 1;

      while (left<right)
      {
        if (a[left]<0)
        {
            left++;
        }
        else{
            swap(a[left], a[right]);
            right--;
        }

      }

       for (auto i : a)
          {
              cout << i << endl;
          }
      

      return 0;
}