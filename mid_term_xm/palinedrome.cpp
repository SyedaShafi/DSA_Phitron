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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse(Node *&rev_head, Node *cur)
{
    if (cur->next == NULL)
    {
        rev_head = cur;
        return;
    }
    reverse(rev_head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    int v;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, tail, v);
    }

    Node *rev_head = NULL;
    Node *rev_tail = NULL;
    Node *cur = head;
    while (cur != NULL)
    {
        insert_at_tail(rev_head, rev_tail, cur->val);
        cur = cur->next;
    }
    reverse(rev_head, rev_head);
    cur = rev_head;
    Node *tmp = head;
    bool flag = true;
    while (tmp != NULL)
    {
        if (cur->val != tmp->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        cur = cur->next;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}