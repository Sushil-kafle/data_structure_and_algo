#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &a ,int first,int last,int key)
{
    int mid = (first + last) / 2;
    if(a[mid]> key)
    {
        last = mid - 1;
    }
    else if(a[mid]<key)
    {
        first = mid + 1;
    }

    else if(a[mid]== key)
    {
        return mid;
    }

    if(first > last)
    {
        return -1;
    }

    return binary_search(a, first, last, key);

    
}

int main()
{

vector<int> a;
int num;
  while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

  int res;
  int first = 0;
  int last = a.size() - 1;


  res=binary_search(a, first,last,7);
  if(res == -1)
  {
      cout << "not found" << endl;


  }
  else
  {
      cout << res;
  }


  return 0;
}