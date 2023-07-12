#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, ele;
    cin >> n;
    stack<int> s;
    stack<int> tmp;
    while (n--)
    {
        cin >> ele;
        s.push(ele);
    }
    while (!s.empty())
    {
        tmp.push(s.top());
        s.pop();
    }

    while (!tmp.empty())
    {
        cout << tmp.top() << " ";
        tmp.pop();
    }
}
