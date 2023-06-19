#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> v(a);
    vector<int> v2(b);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }

    for (int i = 0; i < b; i++)
    {
        replace(v.begin() + k, v.end(), v[i + k + 1], v2[i]);
    }
    for (int i = 0; i < a; i++)
        cout << v[i] << " ";
}