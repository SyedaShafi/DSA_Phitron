#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    while (getline(cin, s))
    {
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                continue;
            cout << s[i];
        }
        cout << "\n";
    }
}