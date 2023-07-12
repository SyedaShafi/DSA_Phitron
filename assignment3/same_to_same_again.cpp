#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    int sz = 0;
    void push(int num)
    {
        sz++;
        Node *newNode = new Node(num);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        sz--;
        head = head->next;
    }
    int top()
    {
        return head->val;
    }

    bool empty()
    {
        if (sz == 0)
            return true;
        return false;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int num)
    {
        sz++;
        Node *newNode = new Node(num);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        head = head->next;
    }

    int top()
    {
        return head->val;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        return false;
    }
};
class myList
{
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
    int n, m;
    cin >> n >> m;
    myList l1, l2;
    int ele;
    myStack st;
    while (n--)
    {
        cin >> ele;
        st.push(ele);
    }
    myQueue q;
    while (m--)
    {
        cin >> ele;
        q.push(ele);
    }

    while (!st.empty())
    {
        l1.push(st.top());
        st.pop();
    }

    while (!q.empty())
    {
        l2.push(q.top());
        q.pop();
    }

    
    if (l1.size() != l2.size())
        cout << "NO\n";

    else
    {

        bool flag = true;
        while (!l1.empty())
        {
            
            if (l1.top() != l2.top())
            {
                flag = false;
                break;
            }
            l1.pop();
            l2.pop();
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}