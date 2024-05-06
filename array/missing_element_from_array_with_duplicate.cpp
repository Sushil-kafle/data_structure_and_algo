// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n) inclusive.
// There is only one repeated number in nums , and some number is missing, retum these missing number.
// You must solve the problem without modifying the array nuns and uses only constant extra space.

// 1 4 3 3   => 2

#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> a;
  int num;

  while (cin >> num && (a.push_back(num), cin.get() != '\n'))
    ;

  // for (int i = 0; i < a.size(); i++)
  // {
  //   int index = abs(a[i]) - 1;
  //   if (a[index] > 0)
  //   {
  //     a[index] = a[index] * -1;
  //   }
  // }

  // for (int i = 0; i < a.size(); i++)
  // {
  //   if (a[i] > 0)
  //   {
  //     cout << i + 1 << endl;
  //   }
  // }

  int i = 0;
  while (i < a.size())
  {
    int index = a[i] - 1;
    if (a[i] != a[index])
      swap(a[i], a[index]);
    else
    {
      ++i;
    }
  }

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] != i + 1)
    {
      cout << i + 1 << endl;
    }
  }

  return 0;
}
