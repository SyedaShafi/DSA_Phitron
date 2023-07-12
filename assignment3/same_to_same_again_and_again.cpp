#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    stack<int> st;
    queue<int> q;
    int ele, n, m;
    cin >> n >> m;
    while (n--)
    {
        cin >> ele;
        st.push(ele);
    }

    while (m--)
    {
        cin >> ele;
        q.push(ele);
    }
    list<int> l1, l2;
    while (!st.empty())
    {
        l1.push_back(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        l2.push_back(q.front());
        q.pop();
    }
    if (l1.size() != l2.size())
        cout << "NO\n";
    else
    {
        bool flag = true;
        while (!l1.empty())
        {
            if (l1.front() != l2.front())
            {
                flag = false;
                break;
            }
            l1.pop_front();
            l2.pop_front();
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}