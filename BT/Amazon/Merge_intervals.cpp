class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(), intervals.end());
        v.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            if (start <= v.back()[1]) {
                int m = max(end, v.back()[1]);
int pstart=v.back()[0];
           v.pop_back();
                v.push_back({pstart, m});
     

            } else
                v.push_back({start, end});
        }
        return v;
    }
};