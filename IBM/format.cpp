#include <iostream>
#include <bits/stdc++.h>
using namespace std;

     bool increasingTriplet(vector<int>& nums) {
        int l = 0, r = 2;
        bool ans = false;
        while (r < nums.size()) {
            for (int i = l; i <=r; i++) {
                if (nums[i + 1] - nums[i] >= 1) {
                    ans = true;
                    continue;
                } else {
                    ans = false;
                    break;
                }
            }
            if (!ans) {

                l++;
                r++;
            }
            else break;
        }
        return ans;
    }

int main()
{
    vector<int>nums{2,1,5,0,4,6};
    char d='c'+2;
    cout<<d;
}