class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int n = heights.size();
        int left = 0;
        int right = n - 1;
        int current = 0;

        while (left < right) {
            int height = std::min(heights[left], heights[right]);
            int width = right - left;
            current = height * width;
            result = std::max(result,current);
            if (heights[left] < heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return result;

    }
};
