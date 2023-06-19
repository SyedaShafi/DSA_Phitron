#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    // vector<int> v(5, 10);
    int v[7] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v2(v, v + 7);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << "\n";
    cout << v2.size();
}