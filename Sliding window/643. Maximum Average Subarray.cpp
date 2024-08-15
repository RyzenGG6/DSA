    double findMaxAverage(vector<int>& nums, int k) {
        if (nums.size() < k) return 0; // Handle edge case
        int l = 0, r = k - 1, len = 0;
        double sum = 0, msum = INT_MIN, dsum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        msum=sum;
  for (int r = k; r < nums.size(); r++) {
         
            sum += nums[r];
            sum -= nums[l];
            msum = max(msum, sum);
            //  r++;
            l++;
        }
        cout<<msum<<l<<r;
        return msum/k;
    }