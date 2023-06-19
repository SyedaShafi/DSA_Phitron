#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Node
{
public:
    int val;
    Node *next;
};
int main()
{
    Node a, b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    b.next = NULL;
    // a.next akta pointer ja b group ar node k point korteche
    cout << a.next->val << "\n";
}