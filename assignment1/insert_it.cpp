#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cin >> n;
    a.insert(a.begin() + n, b.begin(), b.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
