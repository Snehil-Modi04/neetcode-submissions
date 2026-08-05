class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size();
        
        while (left < right) {
            if (nums[left] == val) {
                // Swap current element with the last valid element
                nums[left] = nums[right - 1];
                // Reduce the vector boundary from the right
                right--;
            } else {
                // Move forward if current element is valid
                left++;
            }
        }
        
        return right;
    }
};