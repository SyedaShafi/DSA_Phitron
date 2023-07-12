#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree empty";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        cout << tmp->val << "\n";
        // NULL akta false value
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
}

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        int v1, v2;
        Node *l, *r;
        cin >> v1 >> v2;

        if (v1 != -1)
        {
            l = new Node(v1);
            tmp->left = l;
            q.push(l);
        }

        if (v2 != -1)
        {
            r = new Node(v2);
            tmp->right = r;
            q.push(r);
        }
    }

    return root;
}

int main()
{
    Node *root = input_tree();
    level_order(root);
}