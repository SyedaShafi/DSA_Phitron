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

void remove_duplicate(Node *head)
{
    if (head->next == NULL)
        return;
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            tmp->next = tmp->next->next;
        }
        else
            tmp = tmp->next;
    }
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

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
                swap(i->val, j->val);
        }
    }
    remove_duplicate(head);
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}