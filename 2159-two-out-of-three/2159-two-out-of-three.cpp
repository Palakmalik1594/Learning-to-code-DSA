class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int>seen;
        unordered_set<int>mp(nums1.begin(),nums1.end());
         unordered_set<int>mpp(nums2.begin(),nums2.end());
          unordered_set<int>mppp(nums3.begin(),nums3.end());
          for(int num1:mp){
            seen[num1]++;
          }
           for(int num2:mpp){
            seen[num2]++;
          }
           for(int num3:mppp){
            seen[num3]++;
          }
          vector<int>s;
          for(auto&it: seen){
               if(it.second>=2){
                        s.push_back(it.first);
               }
          }
          return s;
    }
};