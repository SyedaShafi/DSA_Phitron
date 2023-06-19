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
    int v;
    Node *head = NULL;
    int freq[102] = {0};
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, v);
    }

    Node *tmp = head;

    while (tmp != NULL)
    {
        freq[tmp->val]++;
        tmp = tmp->next;
    }

    bool flag = true;

    for (int i = 0; i < 101; i++)
    {
        if (freq[i] > 1)
        {
            flag = false;
        }
    }
    if (flag)
        cout << "NO\n";
    else
        cout << "YES\n";
}