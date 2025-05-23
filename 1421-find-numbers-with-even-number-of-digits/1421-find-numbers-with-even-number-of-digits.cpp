class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int ch:nums){
            string chh=to_string(ch);
                if(chh.size()%2==0){
                    count++;
                
            }
        }
        return count;
    }
};