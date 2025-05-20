class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string>s;
        for(int i=0;i<=num.length()-3;i++){
                if(num[i]==num[i+1] && num[i]==num[i+2]){
                    s.push_back(num.substr(i,3));
                }
        }
             if (s.empty()) return "";
        
     sort(s.rbegin(),s.rend());
     return s[0];
    }
};