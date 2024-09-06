    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < numbers.size(); i++) {
            map[numbers[i]] = i;
        }
        for (int i = 0; i < numbers.size(); i++) {
            int search = target - numbers[i];
            if (map.find(search) != map.end() && i != map[search]) {
                return {i + 1, map.at(search) + 1};
            }
        }

        return {};
    }