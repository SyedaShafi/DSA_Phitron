#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        stack<char> st;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if ((!st.empty()) and (s[i] != st.top()))
                st.pop();
            else
                st.push(s[i]);
        }
        if (st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}