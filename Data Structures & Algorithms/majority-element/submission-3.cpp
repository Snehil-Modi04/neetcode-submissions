class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        int maj = nums[0];

        for(int i=0;i<n;i++){
            if(nums[i]==maj) cnt++;
            else cnt--;
            if(cnt==0) {
                maj = nums[i];
                cnt = 1;
            }
        }
        return maj;
    }
};