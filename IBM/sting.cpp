#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(string s)
{
    int ssum = 0, j;
    string a;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            j = i;
            while (isdigit(s[j]))
            {
                a.push_back(s[j]);

                j++;
            }
            i=j;
            cout << a << " " << endl;
            ssum += stoi(a);

            a.clear();
        }
    }
    return ssum;
}

int main()
{
    string s = "a1b23c33d2";
    cout << sum(s);
}