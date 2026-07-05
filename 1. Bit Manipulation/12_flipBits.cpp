#include <bits/stdc++.h>
using namespace std;

int getFlip(int start, int goal)
{
    int res = start ^ goal;
    int count = __builtin_popcount(res);
    return count;
}

int main()
{
    int start = 10;
    int goal = 7;
    cout << "Ans: " << getFlip(start, goal) << endl;
}