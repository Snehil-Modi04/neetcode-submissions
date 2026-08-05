class Solution {
private:
    bool anagrams(vector<string>& strs, int a, int b){
        if(strs[a].size()!=strs[b].size()) return false;
        int n = strs[a].size();
        int store[26] = {0};
        for(int i=0;i<n;i++){
            store[strs[a][i] - 'a']++;
            store[strs[b][i] - 'a']--;
        }
        for(int i=0;i<26;i++){
            if(store[i]!=0) return false;
        }
        return true;
        
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        if(n==1){
            ans.push_back({{strs[0]}});
            return ans;
        }
        vector<string> dup = strs;

        for(int i=0;i<n;i++){
            if(find(dup.begin(), dup.end(), strs[i]) == dup.end()) continue;
            vector<string>temp;
            int cnt = 0;
            for(int j=i+1;j<n;j++){
                if(anagrams(strs, i, j)){
                    cnt++;
                    temp.push_back(strs[j]);
                    erase(dup, strs[j]);
                }
            }
            erase(dup, strs[i]);
            temp.push_back(strs[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};
