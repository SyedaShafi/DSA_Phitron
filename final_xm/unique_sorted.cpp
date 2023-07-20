#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
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
        vector<int> v;
        for (auto it : s)
        {
            v.push_back(it);
        }
        reverse(v.begin(), v.end());
        for (auto ele : v)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}