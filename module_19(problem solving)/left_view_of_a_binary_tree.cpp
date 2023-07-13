#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> v;
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
void left_view(Node *root)
{
    queue<pair<Node *, int>> q;
    if (root == NULL)
        return;
    else
    {
        q.push({root, 1});
    }

    while (!q.empty())
    {
        pair<Node *, int> tmp, p;
        tmp = q.front();
        v.push_back(tmp.first->val);
        p = q.front();
        while (p.second == tmp.second)
        {
            q.pop();
            if (tmp.first->left)
                q.push({tmp.first->left, tmp.second + 1});
            if (tmp.first->right)
                q.push({tmp.first->right, tmp.second + 1});
            if (q.empty())
                break;
            tmp = q.front();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        v.clear();
        Node *root = level_input();
        left_view(root);

        for (int ele : v)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}