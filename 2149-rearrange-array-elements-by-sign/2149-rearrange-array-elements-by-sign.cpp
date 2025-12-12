class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>p;
        vector<int>nn;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nn.push_back(nums[i]);
            }else{
                p.push_back(nums[i]);
            }
        }
        vector<int>final;
        for(int i=0;i<p.size();i++){
            final.push_back(p[i]);
            final.push_back(nn[i]);

        }
        return final;
    }
};