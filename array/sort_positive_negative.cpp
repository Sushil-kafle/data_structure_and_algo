// bring all negative to one side and positive on onse side

#include <bits/stdc++.h>
using namespace std;

void pos_neg(vector<int> &a)
{
  int start = 0;
  int end = a.size();

  while (start < end)
  {
    if (a[start] < 0)
    {
      start++;
    }
    if (a[end] > 0)
    {
      end--;
    }
    if (a[end] < 0)
    {
      swap(a[start], a[end]);
      start++;
    }
  }
}

int main()
{

  vector<int> a;
  int num;
  while (cin >> num && (a.push_back(num), cin.get() != '\n'))
    ;

  pos_neg(a);

   for (auto i : a)
      {
          cout << i << endl;
      }

  return 0;
}