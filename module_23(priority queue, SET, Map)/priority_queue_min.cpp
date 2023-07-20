#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    // it is based on heap(min);
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int command;
        cin >> command;
        // insert an ele in O(logN)
        if (command == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        // delete an ele from top/root in O(logN)
        else if (command == 1)
        {
            pq.pop();
        }
        // to see root/top value of heap in O(1)
        else if (command == 2)
        {
            cout << pq.top() << "\n";
        }
        else
            break;
    }
}