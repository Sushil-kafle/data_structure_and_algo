#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size = 5;
    int a[size] = {1, 2, 3, 4, 5};

    int start = 0;
    int end = size - 1;

    while (start<end)
    {
        int temp;
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    for (int i :a)
    {
        cout << i << endl;
    }
    

    return 0;
}