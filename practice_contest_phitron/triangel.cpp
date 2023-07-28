#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0)
        cout << "No\n";
    else if (a == b and b == c)
        cout << "Yes\n";
    else
        cout << "No\n";
}