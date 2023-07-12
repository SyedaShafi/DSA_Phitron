#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, ele;
    cin >> n;
    queue<int> q;
    stack<int> s;
    while (n--)
    {
        cin >> ele;
        q.push(ele);
    }
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}