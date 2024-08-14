class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int z = 0, l = 0, r = 0, len = 0, mlen = 0;
        while (r < nums.size()) {
            if (nums[r] == 0)
                z++;
            while (z > k) {
                if (nums[l] == 0) {
                    z--;
                }
                l++;
            }

            len = (r - l) + 1;
            mlen = max(mlen, len);
            r++;
        }
        return mlen;
    }
};