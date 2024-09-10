#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    vector<int> v;
    string ans;
    int i = digits.size() - 1;
    for (int k : digits)
    {
        ans += to_string(k);
    }
    char lsb = ans[i];
    // cout<<lsb;
    if (lsb == '9')
    {
        while (lsb == '9')
        {
            lsb = ans[i - 1];
            i--;
            // cout << lsb << endl;
        }
        lsb = lsb + 1;
        ans[i] = lsb;
        for (int j = i + 1; j < ans.size(); j++)
        {
            ans[j] = '0';
        }
    }
    else
    {
        int tmp = lsb - '0';
        tmp = tmp + 1;

        ans[i] = tmp + '0';
    }

    v.push_back(stoi(ans));
    return v;
}
int main()
{
    vector<int> a{1, 2, 9, 9, 9};
    vector<int> ans;
    ans = plusOne(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}