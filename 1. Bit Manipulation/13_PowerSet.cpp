// Find all the substes

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> res;

    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> subset;

        for (int j = 0; j < n; j++)
        {
            if (((1 << j) & i) != 0)
            {
                subset.push_back(arr[j]);
            }
        }
        res.push_back(subset);
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = subsets(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
            if (j != result[i].size() - 1)
                cout << ",";
        }
        cout << "]" << endl;
    }
    return 0;
}