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

class myQueue
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

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
        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
            return;
        }
        head->next->prev = NULL;
        head = head->next;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
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