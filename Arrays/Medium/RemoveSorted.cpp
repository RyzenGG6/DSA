class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> tmp;
        if (nums.size() > 2) {
            tmp.push_back(nums[0]);
            tmp.push_back(nums[1]);
            for (int i = 2; i < nums.size(); i++) {
                if (nums[i] != nums[i - 2]) {
                    tmp.push_back(nums[i]);
                }
            }
            nums = tmp;
        }

        return nums.size();
    }
};