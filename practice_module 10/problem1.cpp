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
    newNode->pre = tail;
    tail = newNode;
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
        cnt1++;
    }

    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head2, tail2, v);
        cnt2++;
    }

    if (cnt1 != cnt2)
        cout << "NO\n";
    else
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;
        bool flag = true;
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = false;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "No\n";
    }
}