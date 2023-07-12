#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    list<int> mylist = {10, 20, 30, 10, 10, 40, 50, 60};
    mylist.remove(10);
    // mylist.sort(greater<int>());
    // mylist.unique();
    // mylist.reverse();
    for (int v : mylist)
        cout << v << "\n";
}