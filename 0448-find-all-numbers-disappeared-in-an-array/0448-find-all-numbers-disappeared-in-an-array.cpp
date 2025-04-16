class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int p:nums){
            s.insert(p);
        }
        vector<int>res;
        for(int i=1;i<=n;i++){
              if(s.find(i)==s.end()){
                res.push_back(i);
              }
        }
        //sort(s.begin(),s.end());
        return res;
    }
};