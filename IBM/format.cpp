#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse(int a)
{
    int rem = 0, c = 0, ans = 0;
    int len = to_string(a).size();
    while (c != len)
    {
        rem = a % 10;
        ans *= 10;
        ans += rem;
        a = a / 10;
        c++;
    }
    return ans;
}
int main()
{
    vector<int> v{2, 2, 3, 3, 2, 4, 4, 4, 4, 4};
    cout << reverse(123);
}