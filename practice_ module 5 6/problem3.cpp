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

int main()
{
    Node *head = NULL;
    int v;
    int cnt = 0, i = 0;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, v);
        cnt++;
    }
    Node *tmp = head;
    if (cnt % 2 == 0)
    {
        while (tmp != NULL)
        {
            i++;
            tmp = tmp->next;
            if (i == (cnt / 2) - 1)
            {
                cout << tmp->val << " " << tmp->next->val << "\n";
                break;
            }
        }
    }
    else
    {
        tmp = head;
        i = 0;
        while (tmp != NULL)
        {
            i++;
            tmp = tmp->next;
            if (i == (cnt / 2))
            {
                cout << tmp->val << "\n";
                break;
            }
        }
    }
}