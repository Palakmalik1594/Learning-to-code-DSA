class Solution {
public:
string s;
bool pali(int i,int j){
    if(i>=j){
        return true;
    }
    while(i<j && !((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z') ||(s[i] >= '0' && s[i] <= '9'))){
        i++;
    }
    
    while(i<j && !((s[j]>='A' && s[j]<='Z') ||(s[j]>='a' && s[j]<='z') || s[j]>='0' && s[j]<='9')){
        j--;
    }
   
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=(s[i]-'A')+'a';
    }
    if(s[j]>='A' && s[j]<='Z'){
        s[j]=(s[j]-'A')+'a';
    }
    if(s[i]==s[j]){
        return pali(i+1,j-1);
        
    }else{
    return false;
    }
}
    bool isPalindrome(string S) {
        s=S;
        return pali(0,s.length()-1);
    }
};