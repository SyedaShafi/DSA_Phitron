#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // kun value ase ki nah in O(logN)
    if (s.count(10))
        cout << "YES\n";
    else
        cout << "No\n";
    for (auto it : s)
    {
        cout << it << "\n";
    }
}