#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;

class Node
{
public:
    int val;
    Node *next;
    Node *pre;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << "\n";
        tmp = tmp->next;
    }
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << "\n";
        tmp = tmp->pre;
    }
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    newNode->pre = tmp;
    tmp->next = newNode;
    newNode->next->pre = newNode;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
}

void insert_at_tail(Node *&tail, Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->pre = tail;
    tail->next = newNode;
    tail = newNode;
}

int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(tail, head, v);
    }
    int pos,
        val;
    cin >> pos >> val;
    int sz = size(head);
    if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }

    else if (pos == sz)
    {
        insert_at_tail(tail, head, val);
    }

    else if (pos > sz)
    {
        cout << "Invalid\n";
        return 0;
    }

    else
    {
        insert_at_position(head, pos, val);
    }

    print_normal(head);
    cout << "\n\n\n";
    print_reverse(tail);
}