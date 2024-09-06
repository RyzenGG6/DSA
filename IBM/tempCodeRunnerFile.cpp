#include <iostream>
#include <bits/stdc++.h>
using namespace std;

     int compareVersion(string version1, string version2) {
        int tmp, tmp2;
        if (version1.size() > 2) {

            tmp = stoi(version1.substr(2, version1.size() - 2));
        } else {
            tmp = 0;
        }
        if (version2.size() > 2) {
            tmp2 = stoi(version2.substr(2, version2.size() - 2));
        } else
            tmp2 = 0;

        cout << tmp << tmp2;
        if (tmp < tmp2)
            return -1;
        if (tmp > tmp2)
            return 1;
        else
            return 0;
    }

int main()
{
cout<<compareVersion("1.0.01","1");
}