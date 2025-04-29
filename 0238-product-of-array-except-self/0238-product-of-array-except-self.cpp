class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n=nums.size();
        vector<int>p(n,1);
       
        int prefix=1;
        for(int i=0;i<nums.size();i++){
            p[i]=prefix;
            prefix*=nums[i];
        }
        int sufix=1;
        for(int i=n-1;i>=0;i--){
                p[i]*=sufix;
                sufix*=nums[i];

        }
        return p;
    }
};