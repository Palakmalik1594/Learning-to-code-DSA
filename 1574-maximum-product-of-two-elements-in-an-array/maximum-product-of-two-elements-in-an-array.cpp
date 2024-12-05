class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                 m=max(m,((nums[i]-1)*(nums[j]-1)));
                }

            }
        }
        return m;
    }
};