#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    stack<int> s1;
    stack<int> s2;
    int n;
    cin >> n;
    int ele;
    while (n--)
    {
        cin >> ele;
        s1.push(ele);
    }
    int m;
    cin >> m;
    while (m--)
    {
        cin >> ele;
        s2.push(ele);
    }
    if (s1.size() != s2.size())
        cout << "NO\n";
    else
    {
        bool flag = true;
        while (!s1.empty())
        {
            if (s1.top() != s2.top())
            {
                flag = false;
                break;
            }
            s1.pop();
            s2.pop();
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}