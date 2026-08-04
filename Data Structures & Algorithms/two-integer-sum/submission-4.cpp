class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // int j = nums[0];
        unordered_map<int, int> vis;
        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            
            if(vis.find(diff)!=vis.end()) return {vis[diff],i};
            vis[nums[i]] = i;
        }

    }
};
