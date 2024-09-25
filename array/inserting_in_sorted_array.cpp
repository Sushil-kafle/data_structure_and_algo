
#include <bits/stdc++.h>
using namespace std;

void insert_element(int *a, int *length, int element)
{

    for (int i = *length - 1; i > 0; i--)
    {

        if (a[i] > element)
        {
            a[i + 1] = a[i];
        }
        else
        {
            a[i + 1] = element;
            *length += 1;

            break;
        }
    }
}

int main()
{

    int a[10] = {1, 2, 4, 7, 8, 10};
    int length = 6;

    insert_element(a, &length, 15);

     for (auto i : a)
    {
        cout << i << endl;
    }

    return 0;
}