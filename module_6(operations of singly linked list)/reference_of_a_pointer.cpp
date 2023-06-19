#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
void fun(int *&p)
{
    cout << &p << "\n";
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << &ptr << "\n";
    cout << &val << "\n";
}
