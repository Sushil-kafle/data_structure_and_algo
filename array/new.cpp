#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a, b;

    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    while (cin >> num && (b.push_back(num), cin.get() != '\n'))
        ;

    for (auto i : a)
    {
        cout << i << endl;
    }

    for (auto i : b)
    {
        cout << i << endl;
    }

    return 0;
}
