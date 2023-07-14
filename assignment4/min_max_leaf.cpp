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
vector<int> v;
void leaf_nodes(Node *root)
{
    if (root == NULL)
        return;
    leaf_nodes(root->left);
    leaf_nodes(root->right);
    if (root->left == NULL and root->right == NULL)
        v.push_back(root->val);
}
int main()
{
    Node *root = level_input();
    leaf_nodes(root);
    sort(v.begin(), v.end());
    cout << v[v.size() - 1] << " " << v[0] << "\n";
}