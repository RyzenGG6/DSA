class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd, ans;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        int i = 0, j = 0;
        while (i < even.size() || j < odd.size()) {
            if (i < even.size()) {
                ans.push_back(even[i++]); // Add even element if available
            }
            if (j < odd.size()) {
                ans.push_back(odd[j++]); // Add odd element if available
            }
        }
        return ans;
    }
};