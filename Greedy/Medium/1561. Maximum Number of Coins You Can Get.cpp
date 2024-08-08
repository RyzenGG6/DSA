 int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int sum = 0;
        piles.erase(piles.begin(), piles.begin() + (piles.size() / 3));
        for (int i = 0; i < piles.size(); i = i + 2) {
            sum += piles[i];
        }
        return sum;
    }