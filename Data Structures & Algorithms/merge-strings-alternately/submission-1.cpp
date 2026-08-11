class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size();
        int m = word2.size();
        int mini, maxi;

        if(m<=n){
            mini = m;
            maxi = n;
        }
        else{
            mini = n;
            maxi = m;
        }

        for(int i=0;i<mini;i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        if(n<=m){
            for(int i=mini;i<maxi;i++){
                ans+=word2[i];
            }
        }
        else{
            for(int i=mini;i<maxi;i++){
                ans+=word1[i];
            }
        }
        return ans;
    }
};