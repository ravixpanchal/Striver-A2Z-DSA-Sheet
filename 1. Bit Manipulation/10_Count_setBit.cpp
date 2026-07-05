// Method1
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count += n & 1; // odd check
        n = n >> 1;
    }
    return count;
}

int main()
{
    cout << countSetBits(31);

    return 0;
}

// Method 2
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << countSetBits(32);

    return 0;
}

// Method-3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << __builtin_popcount(n) << endl;

    return 0;
}
