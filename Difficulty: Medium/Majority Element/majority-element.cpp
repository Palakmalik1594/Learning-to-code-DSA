// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n=arr.size()/2;
        unordered_map<int,int>mp;
        for(int c:arr){
            mp[c]++;
        }
        int sum=-1;
        for(auto it:mp){
            if(it.second>n){
                sum=it.first;
            }
        }
        return sum;
    }
};