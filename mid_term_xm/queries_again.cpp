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

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_normal(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}

void print_rev(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << "\n";
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
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
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
        int sz = size(head);
        if (pos == 0)
        {
            insert_at_head(head, tail, val);
            print_normal(head);
            print_rev(tail);
        }
        else if (pos == sz)
        {
            insert_at_tail(tail, val);
            print_normal(head);
            print_rev(tail);
        }
        else if (pos > sz)
        {
            cout << "Invalid\n";
        }
        else
        {
            insert_at_position(head, pos, val);
            print_normal(head);
            print_rev(tail);
        }
    }
}