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
vector<int> v1, v2;
void left_leaf(Node *root)
{
    if (root == NULL)
        return;
    left_leaf(root->left);
    left_leaf(root->right);
    if (root->left == NULL and root->right == NULL)
        v1.push_back(root->val);
}
void right_leaf(Node *root)
{
    if (root == NULL)
        return;
    right_leaf(root->left);
    right_leaf(root->right);
    if (root->left == NULL and root->right == NULL)
        v2.push_back(root->val);
}
int main()
{
    Node *root1 = level_input();
    Node *root2 = level_input();
    left_leaf(root1);
    right_leaf(root2);
    // for (int ele : v1)
    //     cout << ele << " ";
    // cout << "\n";
    // for (int ele : v2)
    //     cout << ele << " ";
    // cout << "\n";
    if (v1 == v2)
        cout << "true\n";
    else
        cout << "false\n";
}