#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    vector<int> mx_heap;
    int sz;
    cin >> sz;
    while (sz--)
    {
        int v;
        cin >> v;
        mx_heap.push_back(v);
        int cur_idx = mx_heap.size() - 1;
        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (mx_heap[parent_idx] > mx_heap[cur_idx])
            {
                swap(mx_heap[parent_idx], mx_heap[cur_idx]);
                cur_idx = parent_idx;
            }
            else
                break;
        }
    }

    for (int ele : mx_heap)
    {
        cout << ele << " ";
    }
}