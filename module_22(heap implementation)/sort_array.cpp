#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> ans;
vector<int> mn_heap;
void sort_array()
{
    ans.push_back(mn_heap[0]);
    mn_heap[0] = mn_heap[mn_heap.size() - 1];
    mn_heap.pop_back();
    int cur = 0;
    int last = mn_heap.size();
    while (cur <= last)
    {
        int left = (2 * cur) + 1;
        int right = (2 * cur) + 2;
        if (left <= last and right <= last)
        {

            if (mn_heap[left] <= mn_heap[right] and mn_heap[left] < mn_heap[cur])
            {
                swap(mn_heap[left], mn_heap[cur]);
                cur = left;
            }
            else if (mn_heap[right] <= mn_heap[left] and mn_heap[right] < mn_heap[cur])
            {
                swap(mn_heap[right], mn_heap[cur]);
                cur = right;
            }
            else
                break;
        }
        else
            break;
    }
}
int main()
{
    int n, ele;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        nums.push_back(ele);
    }
    for (int ele : nums)
    {
        mn_heap.push_back(ele);
        int cur_idx = mn_heap.size() - 1;
        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (mn_heap[parent_idx] > mn_heap[cur_idx])
            {
                swap(mn_heap[parent_idx], mn_heap[cur_idx]);
                cur_idx = parent_idx;
            }
            else
            {
                break;
            }
        }
    }
    for (int e : nums)
    {
        sort_array();
        for (int ele : mn_heap)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
    for (int ele : ans)
        cout << ele << " ";
}