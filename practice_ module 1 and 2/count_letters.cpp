#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a']++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            cout << char(i + 'a') << " : " << v[i] << "\n";
        }
    }
}