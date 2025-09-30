class Solution {
public:
bool palin(int i,int j,string& s){
   
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
        int n=s.length();
        for(int i=n;i>0;i--){
            for(int j=0;j<=n-i;j++){
                int end=j+i-1;
                if(palin(j,end,s)){
                    return s.substr(j,i);
                }
            }
        }
        return {};
    }
};