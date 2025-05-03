class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>ss;
        for(int i=0;i<s.length();){
            if(isdigit(s[i])){
                int  num=0;
                while(i<s.length() && isdigit(s[i])){
                     num=num*10+(s[i]-'0');
                     i++;
                }
                    ss.push_back(num);
                    
                
            }else{
                i++;
            }
        }
        for(int i=0;i<ss.size()-1;i++){
            if(ss[i]>=ss[i+1]){
                return false;
            }
        }
        return true;
    }
};