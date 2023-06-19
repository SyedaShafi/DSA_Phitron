#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    // list<int> list2 = {1, 2, 3, 4, 5};
    int a[5] = {10, 20, 30, 40, 50};
    list<int> mylist(a, a + 5);
    for (auto it : mylist)
    {
        cout << it << "\n";
    }
}