#include <bits/stdc++.h>
using namespace std;

int complement(int n)
{
    int m = n;
    int mask = 0;

    while (m != 0)
    {
        // mask
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    return n ^ mask;
}

int main()
{
    int ans = complement(13);
    cout << "Ans: " << ans;

    return 0;
}