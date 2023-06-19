#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll presum[n + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        presum[i + 1] = presum[i] + a[i];
    }
    for (int i = n ; i > 0; i--)
        cout << presum[i] << " ";
}