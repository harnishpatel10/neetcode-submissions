class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int fast = 0;
        int slow = 1;

        while (fast<n) {
            if (nums[fast] != nums[slow-1]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};