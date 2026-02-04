#include <bits/stdc++.h>
using namespace std;

int rangeofXor(int n)
{
    if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else if (n % 4 == 3)
        return 0;
    else
        return n;
}

int main()
{
    int n;
    cin >> n;
    int ans = rangeofXor(n);
    cout << ans;
    return 0;
}