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
bool is_samee(Node *root1, Node *root2)
{
    if (root1 == NULL and root2 == NULL)
        return true;
    else if (root2 == NULL and root1 != NULL)
        return false;
    else if (root1 == NULL and root2 != NULL)
        return false;
    else if (root1->val != root2->val)
        return false;
    bool l = is_samee(root1->left, root2->left);
    bool r = is_samee(root1->right, root2->right);
    return (l and r);
}
int main()
{
    Node *root1 = level_input();
    Node *root2 = level_input();
    bool f = is_samee(root1, root2);
    if (f)
        cout << "true\n";
    else
        cout << "false\n";
}