class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        int right=n-1;
        while(right>=0){
            if(num[right]%2==1){
                return num.substr(0,right+1);
            }else{
                num.pop_back();
                right--;
            }
        }
        return "";
    }
};