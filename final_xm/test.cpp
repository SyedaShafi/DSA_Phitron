#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            int x;
            cin >> x;
            a.push_back(x);
            sort(a.begin(), a.end());
            cout << a.front() << endl;
        }
        else if (com == 1)
        {
            if (!a.empty())
            {
                sort(a.begin(), a.end());
                cout << a.front() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (com == 2)
        {
            if (!a.empty())
            {
                sort(a.begin(), a.end(), greater<>());
                a.pop_back();
                if (!a.empty())
                {
                    cout << a.front() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
}