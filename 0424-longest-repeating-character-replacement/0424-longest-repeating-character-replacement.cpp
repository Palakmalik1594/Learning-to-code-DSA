class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        unordered_map<char,int>mp;
        int maxi=0;
        int count=0;
        while(j<s.size()){
            mp[s[j]]++;
            count=max(count,mp[s[j]]);
            if((j-i+1)-count<=k){
                maxi=max(maxi,j-i+1);
                j++;
            }else{
                mp[s[i]]--;
                i++;
                j++;
            }
        
        
        }
        return maxi;
    }
};