#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << "\n";
        tmp = tmp->next;
    }
    cout << "\n";
}
int main()
{
    string v;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> v;
        if (v == "end")
            break;
        insert_at_tail(head, tail, v);
    }

    // print_normal(head);

    Node *tmp = head;
    cin.ignore();
    int q;
    cin >> q;
    
    // cout << q << "\n";
    cin.ignore();
    while (q--)
    {
        getline(cin, v);
        // cout << v << "\n";
        if (v == "prev")
        {
            if (tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout << tmp->val << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else if (v == "next")
        {
            if (tmp->next != NULL)
            {
                tmp = tmp->next;
                cout << tmp->val << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else
        {
            Node *tmp2 = head;
            bool flag = false;
            string str = v.substr(6);
            // cout << str << "\n";
            while (tmp2 != NULL)
            {
                if (str == tmp2->val)
                {
                    cout << tmp2->val << "\n";
                    tmp = tmp2;
                    flag = true;
                    break;
                }
                else
                {
                    tmp2 = tmp2->next;
                }
            }
            if (flag == false)
            {

                cout << "Not Available\n";
            }
        }
    }
}