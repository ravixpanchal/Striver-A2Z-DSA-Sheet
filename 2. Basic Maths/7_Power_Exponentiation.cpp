#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
    double ans = 1;
    long long temp = n;

    if (temp < 0)
        temp = -temp;

    while (temp > 0)
    {
        if (temp % 2 == 1)
        { // odd
            ans = ans * x;
            temp = temp - 1;
        }
        else
        {
            temp = temp / 2;
            x = x * x;
        }
    }
    if (n < 0)
        return 1 / ans;
    return ans;
}

int main()
{
    double x;
    int n;

    cin >> x >> n;
    cout << myPow(x, n) << endl;

    return 0;
}