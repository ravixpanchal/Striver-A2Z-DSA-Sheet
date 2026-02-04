#include <bits/stdc++.h>
using namespace std;

vector<int> AllDivisor(int n)
{
    vector<int> ans;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
            {
                ans.push_back(n / i);
            }
        }
    }

    // sort
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    vector<int> res = AllDivisor(36);

    for (auto &x : res)
        cout << x << " ";

    return 0;
}