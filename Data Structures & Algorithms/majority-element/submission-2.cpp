class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        int maj = nums[0];

        for(int i=0;i<n;i++){
            if(nums[i]==maj) cnt++;
            else cnt--;
            if(cnt==0 && (i+1)<n) maj = nums[i+1];
        }
        return maj;
    }
};