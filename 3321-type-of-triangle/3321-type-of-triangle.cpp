class Solution {
public:
bool isvalid(int a,int b,int c){
    if(a<=0 || b<=0 || c<=0){
        return false;
    }
    return (a+b>c && b+c>a && c+a>b);
}
    string triangleType(vector<int>& nums) {
        int a=nums[0];
        int b=nums[1];
        int c=nums[2];
        string s="";
        if(isvalid(a,b,c) && a==b && b==c && c==a){
             s="equilateral";
        }else if(isvalid(a,b,c) && a!=b && b!=c && c!=a){
            s="scalene";
        }else if(isvalid(a,b,c) && ((nums[0]==nums[1] && nums[1]!=nums[2])||(nums[1]==nums[2] && nums[2]!=nums[0]) || (nums[0]==nums[2] && nums[1]!=nums[2]))){
            s="isosceles";
        }else{
            s="none";
        }
        return s;
    }
};