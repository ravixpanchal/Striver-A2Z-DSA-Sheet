#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int revNum = 0;
    int temp = n;

    while (n > 0)
    {
        int digit = n % 10;
        revNum = revNum * 10 + digit;
        n = n / 10;
    }

    if (revNum == temp)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    cout << isPalindrome(n);

    return 0;
}