#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << "a: " << a << "," << "b: " << b << endl;

    return 0;
}