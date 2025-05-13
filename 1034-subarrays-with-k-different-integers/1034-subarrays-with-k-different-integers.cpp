class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int count=0;
        int prefix=0;
        unordered_map<int,int>mp;
        while(j<nums.size()){
            mp[nums[j]]++;
            if(mp.size()>k ){
                while(mp.size()>k){
                        mp[nums[i]]--;
                        if(mp[nums[i]]==0){
                            mp.erase(nums[i]);
                        }
                        i++;
                }
                
                prefix=0;
                }
                if(mp.size()==k){
                        while(mp[nums[i]]>1){
                            mp[nums[i]]--;
                            i++;
                            prefix++;
                        }
                    
                count+=1+prefix;
              

                    
                }
                j++;

            
        }
        return count;
    }
};