#include <bits/stdc++.h>
using namespace std;

float power(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    return num * power(num, pow - 1);
}

float factorial(int num)
{

    if (num == 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

float t_series(int num, int precision)
{

    if (precision == 0)
    {
        return 1;
    }

    return (power(num, precision)) / (factorial(precision)) + t_series(num, precision - 1);
}

int main()
{

    float res;

    res = t_series(2, 3);

    cout << res;

    return 0;
}