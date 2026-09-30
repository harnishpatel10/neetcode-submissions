class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> numset(nums.begin(), nums.end());
        int longest = 0;
        for (int num : numset) {
            if (numset.count(num-1) > 0) {
                continue;
            }
            int current = num;
            int length = 1;

            while (numset.count(current + 1) > 0) {
                current++;
                length++;
            }
            if (length > longest) {
                longest = length;
            }

        }
        return longest;
    }
};
