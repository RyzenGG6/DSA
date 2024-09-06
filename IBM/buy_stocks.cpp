    int maxProfit(vector<int>& prices) {
      int m=INT_MAX,h=0;
      for(int i=0;i<prices.size();i++){
        m=min(m,prices[i]);
        h=max(h,prices[i]-m);
      }
      return h;
    }