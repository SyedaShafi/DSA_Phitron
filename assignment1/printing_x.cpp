#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int k = 0, m = n - 1;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (k == m and flag == false)
        {
            for (int s = 0; s < n / 2; s++)
                cout << " ";
            cout << "X";
            flag = true;
            k--, m++;
        }
        else if (flag == false)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == k)
                {
                    cout << "\\";
                }
                else if (j == m)
                {
                    cout << "/";
                }
                else
                    cout << " ";
            }
            k++, m--;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == k)
                {
                    cout << "/";
                }
                else if (j == m)
                {
                    cout << "\\";
                }
                else
                    cout << " ";
            }
            k--, m++;
        }
        cout << "\n";
    }
}