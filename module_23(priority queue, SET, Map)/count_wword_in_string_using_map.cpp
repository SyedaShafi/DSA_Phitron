#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    getline(cin, s);
    string word;
    stringstream ss(s);
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << "\n";
    }
}