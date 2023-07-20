#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    map<string, int> mp;
    mp.insert({"shakib", 27});
    mp.insert({"tamim", 19});
    // mp.insert({"akib", 0});
    mp.insert({"shamim", 7});
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << "\n";
    }

    // kunu value present na thakle 0 return kore
    cout << mp["Shamim"] << "\n";
    // kintu kunu value jodi 0 diye insert kora hoy sekhetre count use kora hoy
    // if a value exist or not
    if (mp.count("akib"))
    {
        cout << "Ase\n";
    }
    else
        cout << "nai\n";
}