class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       for(string w:words){
        int left=0;
        int n=w.size();
        int right=w.size()-1;
        bool ispal=true;
        while(left<=right){
            if(w[left]!=w[right]){
                ispal=false;
                break;
            }
           
            left++;
            right--;
        }
        if(ispal){
            return w;
        }
       }
       return "";
    }
};