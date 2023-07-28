#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s, sub;
    cin >> s;
    for (int j = 0; j < s.size(); j++)
    {
        if (s[j] >= '0' and s[j] <= '9')
        {
            sub.clear();
            int n = s[j] - '0';
            // cout << n << "\n";
            for (int i = j + 1; i < s.size(); i++)
            {
                if (s[i] >= 'a' and s[i] <= 'z')
                {
                    sub += s[i];
                    j++;
                }
                else
                    break;
            }
            for (int i = 0; i < n; i++)
            {
                cout << sub;
            }
        }
        else if (s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/')
            cout << s[j];
    }
}