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

void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->pre = tmp;
    delete delete_node;
}

void delete_from_head(Node *&head, Node *&tail)
{
    Node *delete_node = head;
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete delete_node;
        return;
    }
    head->next->pre = NULL;
    head = head->next;
    delete delete_node;
}

void delete_from_tail(Node *&tail)
{
    Node *delete_node = tail;
    tail = tail->pre;
    tail->next = NULL;
    delete delete_node;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;
    b->next = c;
    c->pre = b;
    int sz = size(head);

    int pos, val;
    cin >> pos;

    if (pos == 0)
        delete_from_head(head, tail);

    else if (pos == sz - 1)
        delete_from_tail(tail);

    else if (pos >= sz)
    {
        cout << "Invalid\n";
        return 0;
    }
    else
        delete_at_position(head, pos);

    print_normal(head);
    cout << "\n\n\n";
    print_reverse(tail);
}