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

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void print_reverse(Node *cur_node, Node *&head)
{
    if (cur_node->next == NULL)
    {
        head = cur_node;
        return;
    }
    print_reverse(cur_node->next, head);
    cur_node->next->next = cur_node;
    cur_node->next = NULL;
    // cout << cur_node->val << " ";
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    print_reverse(head, head);
    print(head);
}