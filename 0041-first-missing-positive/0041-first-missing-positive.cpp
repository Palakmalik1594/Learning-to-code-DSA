class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int>m;
        for(int p:nums){
            if(p>0){
                m.push_back(p);
            }

        }
        sort(m.begin(),m.end());
        int target=1;
        for(int n:m){
            if(n==target){
                target++;
            }else if(n>target){
                return target;
            }
        }
        return target;
    }
};