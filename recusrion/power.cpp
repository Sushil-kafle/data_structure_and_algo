#include <bits/stdc++.h>
using namespace std;

int power(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }

    return power(num, pow - 1) * num;
}

int main()
{

    int res;

    res = power(2, 4);
    cout << res << endl;

    return 0;
}