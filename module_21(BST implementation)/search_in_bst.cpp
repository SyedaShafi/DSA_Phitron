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
void level_order(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        cout << tmp->val << " ";
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
}
bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val = val)
        return true;
    if (root->val > val)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}
int main()
{
    Node *root = level_input();
    // level_order(root);
    int val = 60;
    bool f = search(root, val);
    if (f)
        cout << "Found\n";
    else
        cout << "Not found\n";
}