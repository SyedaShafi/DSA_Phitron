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
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}

void print_reverse(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->pre;
    }
    cout << "\n";
}

int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = tail;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->pre = tail;
    tail->next = newNode;
    tail = newNode;
    print_normal(head);
    print_reverse(tail);
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        print_normal(head);
        print_reverse(tail);
        return;
    }
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
    print_normal(head);
    print_reverse(tail);
}

void insert_at_position(Node *head, Node *tail, int pos, int val)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *newNode = new Node(val);
    newNode->next = tmp->next;
    newNode->pre = tmp;
    tmp->next->pre = newNode;
    tmp->next = newNode;
    print_normal(head);
    print_reverse(tail);
}

int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (size(head) == pos)
        {
            insert_at_tail(head, tail, val);
        }
        else if (pos > size(head))
        {
            cout << "Invalid\n";
        }
        else
        {
            insert_at_position(head, tail, pos, val);
        }
    }
}