// Given three arrays sorted in increasing order. find the elements that are common in all three arrays.Note : can you take care of the duplicates without using any additional Data Structure
//      Example 1
//     : Input : nl 6;
// A = {1, 5, 10, 20, 40, 80} nA = 5;
// B{6, 7, 20, 80, 100} nB = 8;
// C = {3, 4, 15, 20, 30, 70, 80, 120} nC=8
// Output : 20 80
//  Explanation : 20 and 80 are the only  common elements in A,B and C.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a, b, c;
    int num;
    while (cin >> num && (a.push_back(num), cin.get() != '\n'))
        ;
    while (cin >> num && (b.push_back(num), cin.get() != '\n'))
        ;
    while (cin >> num && (c.push_back(num), cin.get() != '\n'))
        ;

    int index_a = 0, index_b = 0, index_c = 0;
    set<int> st;

    while (index_a < a.size() and index_b < b.size() and index_c < c.size())
    {
        if (a[index_a] < b[index_b] )
        {
            index_a++;
        }
        else if (b[index_b] < c[index_c])
        {
            index_b++;
        }
        else if (a[index_a] != b[index_b])
        {
            index_c++;
        }

        else
        {
            st.insert(a[index_a]);

            index_a++;
            index_b++;
            index_c++;
        }
    }

     for (auto i : st)
        {
            cout << i << endl;
        }

    return 0;
}