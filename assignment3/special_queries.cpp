#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int q1;
    cin >> q1;
    string name;
    queue<string> q;
    while (q1--)
    {
        int op;
        cin >> op;
        if (op == 0)
        {
            cin >> name;
            q.push(name);
        }
        else if (op == 1)
        {
            if (q.empty())
            {
                cout << "Invalid\n";
            }
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
    }
}