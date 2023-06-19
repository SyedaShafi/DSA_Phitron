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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

bool insert_at_any_position(Node *head, int val, int pos)
{
    Node *tmp = head;
    Node *newNode = new Node(val);
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return false;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    return true;
}

int main()
{
    Node *head = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, v);
    }
    int q;
    cin >> q;
    while (q--)
    {
        bool t = true;
        int pos, val;
        cin >> pos >> val;
        Node *tmp = head;
        if (pos == 0)
        {
            insert_at_head(head, val);
            tmp = head;
            while (tmp != NULL)
            {
                cout << tmp->val << " ";
                tmp = tmp->next;
            }
        }
        else
        {
            t = insert_at_any_position(head, val, pos);
            if (t)
            {
                while (tmp != NULL)
                {
                    cout << tmp->val << " ";
                    tmp = tmp->next;
                }
            }
            else
                cout << "Invalid";
        }
        cout << "\n";
    }
}