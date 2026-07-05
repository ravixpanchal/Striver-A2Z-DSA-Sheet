#include <bits/stdc++.h>
using namespace std;

int singleNum2(vector<int> &nums)
{
    int n = nums.size();

    // Sort
    sort(nums.begin(), nums.end());

    for (int i = 1; i < n; i = i + 3)
    {
        if (nums[i]!=nums[i - 1])
        {
            return nums[i - 1];
        }
    }
    return nums[n - 1];
}

int main()
{
    vector<int> nums = {5, 5, 5, 4, 4, 4,5,5,5,7};
    cout << singleNum2(nums) << endl;

    return 0;
}