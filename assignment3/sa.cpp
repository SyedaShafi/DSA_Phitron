#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string str;
        cin >> str;
        stack<char> s;
        for (char c : str)
        {
            if (c == 'A')
            {
                if (s.empty() || s.top() == 'A')
                {
                    s.push(c);
                }
                else if (s.top() == 'B')
                {
                    s.pop();
                }
            }
            else if (c == 'B')
            {
                if (s.empty() || s.top() == 'B')
                {
                    s.push(c);
                }
                else if (s.top() == 'A')
                {
                    s.pop();
                }
            }
        }
        if (s.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}