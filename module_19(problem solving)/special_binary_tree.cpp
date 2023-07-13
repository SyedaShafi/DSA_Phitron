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
bool is_special(Node *root)
{
    if (root->left == NULL and root->right == NULL)
        return true;
    else if (root->left == NULL or root->right == NULL)
        return false;
    bool l = is_special(root->left);
    bool r = is_special(root->right);

    return (l and r);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = level_input();
        bool ans = is_special(root);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
}