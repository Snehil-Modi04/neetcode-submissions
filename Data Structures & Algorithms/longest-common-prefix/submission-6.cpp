class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 1) return strs[0];
        vector<string> ans;
        for(int i=1;i<n;i++){
            int m = min(strs[i].size(), strs[i-1].size());
            string temp="";
            string s1 = strs[i];
            string s2 = strs[i-1];
            for(int j=0;j<m;j++){ 
                if(s1[j]==s2[j]) temp+=s1[j];
                else break;
            }
            ans.push_back(temp);
        }
        string final = ans[0];
        for(int i=1;i<ans.size();i++){
            if(ans[i].size()<ans[i-1].size()){
                final = ans[i];
            }

        }
        return final;
    }
};