#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;

int main()
{
    list<int> myList;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        myList.push_back(v);
    }
    myList.sort();
    myList.unique();
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
}