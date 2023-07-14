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
void leveling(Node *root, int level)
{
    bool f = false;
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        if (p.second == level)
        {
            f = true;
            cout << p.first->val << " ";
        }
        if (p.first->left)
            q.push({p.first->left, p.second + 1});
        if (p.first->right)
            q.push({p.first->right, p.second + 1});
    }
    if (!f)
        cout << "Invalid";
}
int main()
{
    Node *root = level_input();
    int level;
    cin >> level;
    leveling(root, level);
    cout << "\n";
}