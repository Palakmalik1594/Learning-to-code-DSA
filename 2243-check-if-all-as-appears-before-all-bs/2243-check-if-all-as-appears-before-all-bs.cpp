class Solution {
public:
    bool checkString(string s) {
        int n=s.length();
        bool seen=false;
        for(char c:s){
            if(c=='b'){
                seen=true;
            }else if(seen && c=='a'){
                return false;
            }
        }
        return true;
    }
};