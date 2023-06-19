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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

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

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int v, cnt1 = 0, cnt2 = 0;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head1, tail1, v);
    }
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head2, tail2, v);
    }
    // cout << size(head1) << " " << size(head2) << "\n";
    if (size(head1) == size(head2))
        cout << "YES\n";
    else
        cout << "NO\n";
}