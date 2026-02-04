#include <bits/stdc++.h>
using namespace std;

pair<int, int> singleNum3(vector<int> &nums)
{
    long xorr = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ nums[i];
    }

    int rightmost = (xorr & ~(xorr - 1));
    int b1 = 0;
    int b2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] & rightmost)
        {
            b1 = b1 ^ nums[i];
        }
        else
        {
            b2 = b2 ^ nums[i];
        }
    }
    return {b1, b2};
}

int main()
{
    vector<int> nums = {2, 4, 2, 6, 3, 7, 7, 3};
    pair<int, int> ans = singleNum3(nums);

    cout << ans.first << "," << ans.second << endl;

    return 0;
}