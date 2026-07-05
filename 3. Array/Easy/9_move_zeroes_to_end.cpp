#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 0, 4, 0, 0, 0, 5, 6, 0};

    // 2 pointer approach
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}