#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    stack<int> stk;
    int n;
    cin >> n;
    int x;
    while (n--)
    {
        cin >> x;
        stk.push(x);
    }

    while (!stk.empty())
    {
        cout << stk.top() << "\n";
        stk.pop();
    }
}