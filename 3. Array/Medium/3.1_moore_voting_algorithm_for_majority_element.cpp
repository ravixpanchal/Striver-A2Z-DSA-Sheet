#include <bits/stdc++.h>
using namespace std;

int moore_voting_algorithm(vector<int> &arr)
{
    int n = arr.size();

    int element;
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            element = arr[i];
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == element)
            cnt++;
    }

    if (cnt > arr.size() / 2)
        return element;

    return -1;
}

int main()
{
    vector<int> arr = {1, 1, 1, 1, 2, 3, 5};
    cout << "majority element is: " << moore_voting_algorithm(arr) << endl;

    return 0;
}