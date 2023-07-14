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
void print_tree(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        v.push_back(tmp->val);
        if (tmp->right)
            q.push(tmp->right);
        if (tmp->left)
            q.push(tmp->left);
    }
}
int main()
{
    Node *root = level_input();
    print_tree(root);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}