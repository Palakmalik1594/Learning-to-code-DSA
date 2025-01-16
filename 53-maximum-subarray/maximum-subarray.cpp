class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=nums[0];
        int n=nums.size();
        int answer=nums[0];
        for(int i=1;i<n;i++){
            int opt1=nums[i]+currentsum;
            int opt2=nums[i];
            currentsum=max(opt1,opt2);
            
        
answer=max(currentsum,answer);
        }
return answer;
        
    }
};