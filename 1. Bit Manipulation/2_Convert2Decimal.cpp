#include <bits/stdc++.h>
using namespace std;

int convert2decimal(string x)
{
    int n = x.size();

    int p2 = 1;
    int num = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (x[i] == '1')
        {
            num = num + p2;
        }
        p2 = p2 * 2;
    }
    return num;
}

int main()
{
    int ans = convert2decimal("1101");
    cout << "ans: " << ans;

    return 0;
}