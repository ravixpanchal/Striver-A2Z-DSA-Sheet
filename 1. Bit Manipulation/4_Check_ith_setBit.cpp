#include <bits/stdc++.h>
using namespace std;

bool isSetBit(int n)
{
    int i = 2;

    if ((n & (1 << i)) != 0)
        return true;
    else
        return false;
}

int main()
{
    cout << isSetBit(16) << endl;

    return 0;
}
