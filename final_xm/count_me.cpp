#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int mx = 0;
        string st;
        getline(cin, st);
        string word;
        string ans = "";
        stringstream ss(st);
        map<string, int> mp;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                mx = mp[word];
                ans = word;
            }
           
        }
        cout << ans << " " << mp[ans] << "\n";
    }
}