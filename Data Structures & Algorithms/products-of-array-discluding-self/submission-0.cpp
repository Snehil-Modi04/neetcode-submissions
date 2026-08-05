class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            prod*=nums[i];
        }
        for(int i=0;i<n;i++){
            int temp = 1;
            if(nums[i]!=0) ans[i] = prod/nums[i];
            else{
                for(int j=0;j<n;j++){
                    if(i==j) continue;
                    temp*=nums[j];
                }
                ans[i] = temp;
            }
        }
        return ans;
    }
};
