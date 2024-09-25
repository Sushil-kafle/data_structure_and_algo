#include<bits/stdc++.h>
using namespace std;

int check_sorted(vector<int> &a)
{

    for (int i = 0; i < a.size();i++)
    {
        if(a[i] > a[i+1] )
        {
            return 0;
        }
    }
    return 1;
}


int main()
{

vector<int> a;
int num;
  while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

  int res;
  res = check_sorted(a);

    if(res )
    {
        cout << "sorted" << endl;

    }

    else {
        cout << " not sorted" << endl;
    }

  return 0;
}