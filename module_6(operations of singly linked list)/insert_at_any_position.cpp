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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert_at_any_position(Node *head, int v, int pos)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << "\n";
        tmp = tmp->next;
    }
}
int main()

{
    int v;
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        cin >> v;
        insert_at_tail(head, v);
        print_linked_list(head);
        cout << "\n\n";
    }

    int val, pos;
    cin >> val >> pos;
    insert_at_any_position(head, val, pos);
    print_linked_list(head);
}