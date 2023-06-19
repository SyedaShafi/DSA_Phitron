#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    list<int> mylist = {10, 20, 30, 40};
    cout << mylist.front() << endl;
    cout << mylist.back() << endl;
    cout << *next(mylist.begin(), 2);
}