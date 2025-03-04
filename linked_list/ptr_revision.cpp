#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *a;

    int b = 10;
    cout << "b= " << b << endl;
    
    a = &b;
    cout << "a= " << a << endl;
    cout <<"*a= " <<*a << endl;
    
    *a = 20;
    
    cout << "b= " << b << endl;
    cout <<"*a= " <<*a << endl;

    return 0;
}