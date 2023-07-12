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
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (i + 1 < s.size())
            {
                if ((s[i] == 'R' and s[i + 1] == 'B') || (s[i] == 'B' and s[i + 1] == 'R'))
                {
                    if (!ans.empty() and ans.top() == 'P')
                        ans.pop();
                    else
                        ans.push('P');
                    i++;
                }
                else if ((s[i] == 'R' and s[i + 1] == 'G') || (s[i] == 'G' and s[i + 1] == 'R'))
                {
                    if (!ans.empty() and ans.top() == 'Y')
                        ans.pop();
                    else
                        ans.push('Y');
                    i++;
                }
                else if ((s[i] == 'B' and s[i + 1] == 'G') || (s[i] == 'G' and s[i + 1] == 'B'))
                {
                    if (!ans.empty() and ans.top() == 'C')
                        ans.pop();
                    else
                        ans.push('C');
                    i++;
                }
                else if (s[i] == s[i + 1])
                    i++;
                else
                    ans.push(s[i]);
            }
            else
                ans.push(s[i]);
        }
        string res = "";
        stack<char> tmp;
        while (!ans.empty())
        {
            tmp.push(ans.top());
            ans.pop();
        }
        while (!tmp.empty())
        {
            res += tmp.top();
            tmp.pop();
        }
        cout << res << "\n";
    }
}