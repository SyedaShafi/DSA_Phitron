#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int y;
    cin >> y;
    if (y == 1)
        cout << "1\n";
    else if (y == 2)
        cout << "2\n";
    else
    {
        ll child = 2, sum = 1;
        for (int i = 3; i <= y; i++)
        {
            child *= 2;
            sum *= 2;
        }
        // cout << child << " " << sum << "\n";
        
        cout << sum * child << "\n";
    }
}