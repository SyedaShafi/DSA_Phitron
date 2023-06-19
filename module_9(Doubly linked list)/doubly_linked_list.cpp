#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Node
{
public:
    Node *pre;
    int val;
    Node *next;
    Node(int val)
    {
        this->next = NULL;
        this->pre = NULL;
        this->val = val;
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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;

    print_normal(head);
    cout << "\n\n";
    print_reverse(tail);
}