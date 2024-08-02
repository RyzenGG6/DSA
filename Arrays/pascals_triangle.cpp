class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> v(numRows, vector<int>(numRows));
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {

            for (int j = 0; j <= i; j++) {
                if (i == j) {
                    v[i][j] = 1;
                    continue;
                }
                if (j == 0) {
                    v[i][j] = 1;
                    continue;
                }

                else
                    v[i][j] = v[i - 1][j-1] + v[i-1][j];
            }
        }
              vector<int> tmp;
        for (int i = 0; i < numRows; i++) {
      
            // tmp.push_back(i);
            for (int j = 0; j <= i; j++) {
                if (v[i][j] != 0) {
                    tmp.push_back(v[i][j]);

                } else
                    continue;
            }
            ans.push_back(tmp);
            tmp.clear();
        }
        return ans;
    }
};