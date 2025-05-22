class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.length();
        vector<string>p;
         while(n%k!=0){
                s.push_back(fill);
                n++;
            }
        for(int i=0;i<n;i+=k){
            p.push_back(s.substr(i,k));    
        }
        return p;
    }
};