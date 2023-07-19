#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
void delete_ele(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = (2 * cur) + 1;
        int right_idx = (2 * cur) + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // duitai ache
            if (v[left_idx] <= v[right_idx] and v[left_idx] < v[cur])
            {
                swap(v[cur], v[left_idx]);
            }
            else if (v[right_idx] <= v[left_idx] and v[right_idx] < v[cur])
            {
                swap(v[cur], v[right_idx]);
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            // left ase
            if (v[left_idx] < v[cur])
            {
                swap(v[cur], v[left_idx]);
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            // right ase
            if (v[right_idx] < v[cur])
            {
                swap(v[cur], v[right_idx]);
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int sz;
    cin >> sz;
    vector<int> v;
    while (sz--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (v[parent_idx] > v[cur_idx])
            {
                swap(v[parent_idx], v[cur_idx]);
                cur_idx = parent_idx;
            }
            else
                break;
        }
    }
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << "\n";
    delete_ele(v);
    delete_ele(v);
    for (int ele : v)
    {
        cout << ele << " ";
    }
}