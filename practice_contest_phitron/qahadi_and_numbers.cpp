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
        map<int, int> mp;
        int n, ele;
        cin >> n;
        while (n--)
        {
            cin >> ele;
            mp[ele]++;
        }
        int ans = 0;
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                ans += it.second - 1;
            }
        }
        cout << ans << "\n";
    }
}