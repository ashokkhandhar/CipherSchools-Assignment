#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    if (nums.empty()) return 0;
    auto sz = nums.size();
    if (sz == 1) return nums[0];
    auto prev = nums[0];
    auto cur = max(prev, nums[1]);
    for (auto i = 2; i < sz; ++i) {
        auto tmp = cur;
        cur = max(nums[i] + prev, cur);
        prev = tmp;
    }
    return cur;
}

int main()
{
    vector<int> arr = {1,2,3,1};
    cout << rob(arr);
    return 0;
}