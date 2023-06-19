#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int cnt = 0, idx = 0;
    for (int i = 0; i < n; i++)
    {

        auto it = find(v.begin(), v.end(), v[i] + 1);
        while (it != v.end())
        {
            auto it = find(v.begin(), v.end(), v[i] + 1);
            cnt++;
            idx++;
        }
        i += idx, idx = 0;
    }
    cout << cnt << "\n";
}