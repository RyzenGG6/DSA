#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string format(string s)
{
    string ans;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
        {
            int n = s[i + 1] - '0';

            try
            {
                int f = m.at(s[i]);
                int g = m.at(s[i]);
                m[s[i]] = g + n;
            }
            catch(out_of_range& e){
                  m[s[i]]=n;
            }
        }
    }
    for (auto pair=m.begin();pair!=m.end();pair++)
    {
        ans += pair->first;
        ans += to_string(pair->second);
    }
    return ans;
}

int main()
{
    string a = "a3b2c5a1g9c2";
    cout << format(a);
}