class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>s;
        if(words.empty()) return s;
        s.push_back(words[0]);
        int last=groups[0];
        for(int i=1;i<words.size();i++){
            if(groups[i]!=last){
                s.push_back(words[i]);
                last=groups[i];
            }
        }
        return s;
    }
};