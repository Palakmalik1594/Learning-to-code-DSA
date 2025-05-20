class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mpp;
        for (char c:word1){
            mp[c]++;
        }for (char ch:word2){
            mpp[ch]++;
        }
        for(char i='a';i<='z';i++){
            if((abs(mpp[i]-mp[i]))>3){
                return false;
            }
        }
            return true;
    }
};