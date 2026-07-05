#include <bits/stdc++.h>
using namespace std;

int majority_element(vector<int> &arr)
{
    unordered_map<int, int> m;

    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }

    for (auto &x : m)
    {
        if (x.second > arr.size() / 2)
        {
            return x.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};

    cout << "majority element is: " << majority_element(arr) << endl;

    return 0;
}