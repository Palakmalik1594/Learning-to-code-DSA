class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        //sort(nums.begin(),nums.end());
        vector<int>v(n,0);
       
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(i!=j && nums[j]<nums[i]){
                    c++;
                }
                    v[i]=c;
                
            }
        }
        return v;
    }
};