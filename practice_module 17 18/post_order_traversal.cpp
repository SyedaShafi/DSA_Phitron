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
    Node *root;
    queue<Node *> q;
    int ele;
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

void post_order(Node *root)
{
    if (root == NULL)
        return;
    post_order(root->left);
    post_order(root->right);
    v.push_back(root->val);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        v.clear();
        Node *root = level_input();
        post_order(root);
        for (int ele : v)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}