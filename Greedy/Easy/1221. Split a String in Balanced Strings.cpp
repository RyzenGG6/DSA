 int balancedStringSplit(string s) {
        int l = 0, r = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R')
                r++;
            else
                l++;
            if (l == r) {
                ans++;
                l=0;
                r=0;
            }
        }
        return ans;
    }