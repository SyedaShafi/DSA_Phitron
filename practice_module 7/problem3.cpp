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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v, cnt = 0;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, tail, v);
        cnt++;
    }
    Node *tmp = head;
    if (cnt % 2 == 0)
    {
        for (int i = 0; i < (cnt / 2) - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << "\n";
    }
    else
    {
        tmp = head;
        for (int i = 0; i < cnt / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << "\n";
    }
}