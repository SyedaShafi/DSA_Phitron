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
    Node *root;
    queue<Node *> q;
    cin >> ele;
    if (ele == -1)
    {
        root = NULL;
    }
    else
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
ll left_sum(Node *root)
{
    ll sum = 0;
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        if (tmp->left)
        {
            sum += tmp->left->val;
            q.push(tmp->left);
        }
        if (tmp->right)
        {
            q.push(tmp->right);
        }
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = level_input();
        // 0 based height
        cout << left_sum(root) << "\n";
    }
}