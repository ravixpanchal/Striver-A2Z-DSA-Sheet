#include <bits/stdc++.h>
using namespace std;

bool armstrongNum(int n)
{
    int sum = 0;
    int temp = n;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    if (sum == temp)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    cout << armstrongNum(n);

    return 0;
}