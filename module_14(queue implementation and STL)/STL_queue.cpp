#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    int ele;
    while (n--)
    {
        cin >> ele;
        q.push(ele);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}