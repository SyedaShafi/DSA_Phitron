#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int ele;
            cin >> ele;
            pq.push(ele);
            cout << pq.top() << "\n";
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty\n";
            else
                cout << pq.top() << "\n";
        }
        else if (cmd == 2)
        {
            if (pq.empty())
                cout << "Empty\n";
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty\n";
                else
                    cout << pq.top() << "\n";
            }
        }
    }
}