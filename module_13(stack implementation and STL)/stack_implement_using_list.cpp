#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class myStack
{
    // akane sob fucntion ar complexity O(1)
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    // size O(1) a calculate kore karon eta size a track rakhe always notun element add hole size bare kisu pop hoile size kome
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
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