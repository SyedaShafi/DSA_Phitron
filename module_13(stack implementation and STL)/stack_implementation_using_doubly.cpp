#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        if (tail->prev == NULL)
        {
            head = NULL;
            tail = NULL;
            return;
        }
        Node *del = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        delete del;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
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