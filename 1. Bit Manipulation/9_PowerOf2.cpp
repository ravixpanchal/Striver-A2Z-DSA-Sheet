#include <bits/stdc++.h>
using namespace std;

bool isEven(int n)
{
    if ((n & n - 1) == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    cout << isEven(n) << endl;

    return 0;
}