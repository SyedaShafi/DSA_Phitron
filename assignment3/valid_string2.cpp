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
        string s;
        cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1 == cnt2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}