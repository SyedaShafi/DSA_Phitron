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
        int n;
        cin >> n;
        map<int, int> mp;
        int mx = 0, ans = INT_MIN;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        for (auto it : mp)
        {
            if (it.second == mx and it.first > ans)
                ans = it.first;
        }
        cout << ans << " " << mp[ans] << "\n";
    }
}