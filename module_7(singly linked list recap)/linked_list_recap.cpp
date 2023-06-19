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

void printList(Node *head)
{
    Node *next = head;
    while (next != NULL)
    {
        cout << next->val << " ";
        next = next->next;
    }
}

int main()
{
    Node *head = new Node(5);
    Node *tmp1 = new Node(10);
    Node *tmp2 = new Node(30);
    Node *tmp3 = new Node(40);
    Node *tmp4 = new Node(50);
    Node *tmp5 = new Node(60);

    head->next = tmp1;
    tmp1->next = tmp2;
    tmp2->next = tmp3;
    tmp3->next = tmp4;
    tmp4->next = tmp5;

    printList(head);
}