#include<bits/stdc++.h>
using namespace std;

int main()
{

    set<int> st;

    st.insert(40);

    st.insert(10);
    st.insert(20);
    st.insert(20);
    st.insert(30);

    for (int i:st)
    {
        cout << i << "\t";
    }

    cout << endl;

    st.erase(20);
    for (int i:st)
    {
        cout << i << "\t";
    }


    return 0;
}