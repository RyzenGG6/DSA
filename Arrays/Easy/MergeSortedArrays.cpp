class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        auto it = find(nums1.begin() + m, nums1.end(), 0);
        int i = 0;
        if (n == 0 && m == 0)
            return;
        int sum = 0;
        for (int i : nums1) {
            if (i == 0)
                sum++;
        }
        int ind = distance(nums1.begin(), it);
        // if (ind == 0 && n == 1) {
        //     nums1[0] = nums2[0];
        // }

        // ;
        // int calculable=nums1.size()-sum;

        cout << ind << endl;
        if (it != nums1.end() && n == nums2.size()) {
            cout << "yes" << endl;
            for (; ind < nums1.size(); ind++) {
                nums1[ind] = nums2[i];
                cout << ind << endl;
                i++;
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};