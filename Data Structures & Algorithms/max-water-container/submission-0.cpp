class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int area=0, maxi=0;
        while(l<r){
            area = (r-l)*min(heights[l], heights[r]);
            maxi = max(maxi, area);
            if(heights[l]<heights[r]) l++;
            else r--;
        }
        return maxi;
    }
};
