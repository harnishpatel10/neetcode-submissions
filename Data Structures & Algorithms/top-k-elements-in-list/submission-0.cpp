class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        auto n = nums.size();
        std::vector<std::vector<int>> buckets(n+1);
        for (auto& entry : count) {
            int value = entry.first;
            int freq = entry.second;
            buckets[freq].push_back(value);
        }
        std::vector<int> result;
        for (int freq=n; freq>=1; freq--) {
            for (int value : buckets[freq]) {
                result.push_back(value);
                if ((int)result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};
