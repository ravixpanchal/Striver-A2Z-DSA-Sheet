#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string convert2Binary(int n)
{
    string res = "";

    while (n > 0)
    {
        if (n % 2 == 1)
            res += "1";
        else
            res += "0";
        n = n / 2;
    }

    // reverse
    reverse(res.begin(), res.end());
    return res;
}

int main()
{

    string ans = convert2Binary(84);
    cout << "ans: " << ans << endl;

    return 0;
}