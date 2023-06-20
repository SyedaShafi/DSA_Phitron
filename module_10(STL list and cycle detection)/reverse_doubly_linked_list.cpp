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
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void print_rev(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
}

void reverse_doubly(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (true)
    {
        if (i == j || i->next == j)
        {
            swap(i->val, j->val);
            break;
        }
        swap(i->val, j->val);
        i = i->next;
        j = j->pre;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;
    b->next = c;
    c->pre = b;
    c->next = d;
    d->pre = c;

    reverse_doubly(head, tail);
    print_normal(head);
    cout << "\n\n";
    print_rev(tail);
}