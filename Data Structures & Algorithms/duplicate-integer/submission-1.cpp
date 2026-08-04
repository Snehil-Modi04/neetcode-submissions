class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int ans = true;
        int val = nums[0];
        int n = nums.size();



        for(int i=1;i<n;i++){
            if(val==nums[i]) return true;
            val = nums[i];
        }
        return false;
    }
};