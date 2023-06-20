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

bool is_palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool ans = true;
    while (true)
    {
        if (i == j)
        {
            ans = true;
            break;
        }
        if (i->next == j)
        {
            if (i->val == j->val)
            {
                ans = true;
            }
            else
            {
                ans = false;
            }
            break;
        }

        if (i->val != j->val)
        {
            ans = false;
            break;
        }
        i = i->next;
        j = j->pre;
    }
    return ans;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, tail, v);
    }

    bool flag = is_palindrome(head, tail);

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}