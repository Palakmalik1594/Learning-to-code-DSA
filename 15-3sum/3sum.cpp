class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
            continue;
            }
            int l=i+1;
            int r=n-1;
            while(l<r){
                int s=nums[i]+nums[r]+nums[l];
                if(s==0){
                    v.insert({nums[i],nums[l],nums[r]});
                l++;
                r--;
                while(l<r && nums[l]==nums[l-1])l++;
                while(l<r && nums[r]==nums[r+1]) r--;
                }else if(s<0){
                    l++;
                }else{
                    r--;
                }
            }
            
            
        }
        return vector<vector<int>>(v.begin(),v.end());
    }
};