class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>c;
        for(int count:nums){
            c[count]++;
        }
        for(auto it:c){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};