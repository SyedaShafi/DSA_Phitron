#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << &a << "\n";
    cout << ptr << "\n";
    cout << &*ptr << "\n";
    cout << *&ptr << "\n";
}