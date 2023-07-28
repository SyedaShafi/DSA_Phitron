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
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            mp[ele]++;
        }
        for (auto it : mp)
        {
            if (it.second % 2 != 0)
            {
                cout << it.first << "\n";
                break;
            }
        }
    }
}