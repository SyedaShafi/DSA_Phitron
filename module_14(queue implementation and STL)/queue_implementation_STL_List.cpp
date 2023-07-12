#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class myQueue
{
public:
    int sz = 0;
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool isEmpty()
    {
        return l.empty();
    }
};
int main()
{
    int n;
    cin >> n;
    int ele;
    myQueue q;
    while (n--)
    {
        cin >> ele;
        q.push(ele);
    }
    while (!(q.isEmpty()))
    {
        cout << q.front() << " sz:" << q.size();
        cout << "\n";
        q.pop();
    }
}