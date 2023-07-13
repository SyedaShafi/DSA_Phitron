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

Node *level_input()
{
    int ele;
    cin >> ele;
    Node *root = NULL;
    queue<Node *> q;
    if (ele != -1)
    {
        root = new Node(ele);
        q.push(root);
    }
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        int v1, v2;
        cin >> v1 >> v2;
        Node *l, *r;
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

int level_order(Node *root, int ele)
{
    queue<pair<Node *, int>> q;
    int l = 0;
    if (root == NULL)
        return 0;
    else
        q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        if (p.first->val == ele)
        {
            l = p.second;
            break;
        }
        if (p.first->left)
        {
            q.push({p.first->left, p.second + 1});
        }
        if (p.first->right)
        {
            q.push({p.first->right, p.second + 1});
        }
    }
    return l;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = level_input();
        int ele;
        cin >> ele;
        cout << level_order(root, ele) << "\n";
    }
}