#include <bits/stdc++.h>
using namespace std;

int singleNum1(vector<int> nums)
{
    int xorr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        xorr = xorr ^ nums[i];
    }
    return xorr;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNum1(nums) << endl;
    return 0;
}