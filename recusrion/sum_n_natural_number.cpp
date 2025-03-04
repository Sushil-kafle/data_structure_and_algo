#include<bits/stdc++.h>
using namespace std;

int sum_natural(int n)
{

    if(n == 0)
    {
        return 0;
    }

    return n + sum_natural(n - 1);
}


int main()
{

    int res;

    res = sum_natural(5);

    cout << res;

    return 0;
}