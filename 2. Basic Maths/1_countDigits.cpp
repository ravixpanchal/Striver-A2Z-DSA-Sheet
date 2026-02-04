#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cnt++;
        n = n / 10;
    }
    return cnt;
}

int main()
{
    int n = 19077;
    cout << countDigits(n) << endl;

    // Short Method
    cout << floor(log10(91484111122423425)) + 1 << endl;

    return 0;
}