#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int mid, f = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (v[mid] == x)
            {
                f = 1;
                break;
            }
            if (v[mid] < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (f == 1)
            cout << "found\n";
        else
            cout << "not found\n";
    }
}