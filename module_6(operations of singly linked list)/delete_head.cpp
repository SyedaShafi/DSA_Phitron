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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << "\n";
        tmp = tmp->next;
    }
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *del_node = tmp->next;
    tmp->next = tmp->next->next;
    delete del_node;
}
void delete_head(Node *&head)
{
    Node *del_node = head;
    head = head->next;
    delete del_node;
}
int main()
{
    Node *head = NULL;
    int v;
    for (int i = 0; i < 5; i++)
    {
        cin >> v;
        insert_at_tail(head, v);
        print_linked_list(head);
        cout << "\n\n";
    }
    int pos;
    cin >> pos;
    if (pos > 0)
    {
        delete_from_position(head, pos);
        print_linked_list(head);
    }
    else
    {
        delete_head(head);
        print_linked_list(head);
    }
}