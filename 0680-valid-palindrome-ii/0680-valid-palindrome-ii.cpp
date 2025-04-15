class Solution {
public:
   bool ispalindrome(string s,int left,int right){

    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
        
    }
    return true;
   }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1);

            }
            i++;
            j--;
        }
        return true;
    }
};