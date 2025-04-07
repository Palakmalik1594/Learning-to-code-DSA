class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        int maxlen=INT_MIN;
       unordered_set<int>m;
       int l=0;
       for(int r=0;r<s.length();r++){
        if(m.find(s[r])!=m.end()){
            while(l<r && m.find(s[r])!=m.end()){
                m.erase(s[l]);
            l++;
        }
        }

            m.insert(s[r]);
             maxlen=max(maxlen,r-l+1);
       }
          return maxlen;
    }
};