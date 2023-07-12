#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class myStack
{
    // akane sob fucntion ar complexity O(1)
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        return false;
    }
};
int main()
{
    myStack stk;
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