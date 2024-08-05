class Solution {
public:
    int strStr(string haystack, string needle) {
        int ind = 0;
        int j = 0, ans = -1;
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[j]) {
                // ind=i;
                j++;
                for (int k = i + 1; k < haystack.size(); k++) {
                    if (haystack[k] == needle[j]) {
                        j++;
                    } else
                        break;
                }
                if (j == needle.size()) {
                    ans = i;
                    break;
                } else
                    j = 0;
            }
        }
        return ans;
    }
};