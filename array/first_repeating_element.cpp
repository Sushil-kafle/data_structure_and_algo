// Given an array arr[] of size n, find the first repeating element. The element should occur more
// than once and the index of its first occurrence should be the smallest.
// Note:- The position you return should be according to 1 -based indexing.
// Example 1:
// Input:
// n=7
// arr[] ={1 ,5,3,4,3,5,6}
// Output: 2
// Explanation:
// 5 is appearing twice and
// its first appearence is at index 2
// which is less than 3 whose first
// occuring index is 3.
// Example 2:
// Input:
// n=4
// arr[] ={1 ,2,3,4}
// Output: -1
// Explanation:
// no element is repeating

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;

    unordered_map<int, int> b;

    for (int i = 0; i < a.size(); i++)
    {
        b[a[i]]++;
    }

    for (auto i : b)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}