#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int ele, n, m;
    stack<int> s;
    queue<int> q;

    cin >> n;
    while (n--)
    {
        cin >> ele;
        s.push(ele);
    }

    cin >> m;
    while (m--)
    {
        cin >> ele;
        q.push(ele);
    }

    if (s.size() != q.size())
        cout << "NO\n";
    else
    {
        bool flag = true;
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}