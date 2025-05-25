class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_set<int>s;
        for(int i=0;i<arr.size();i++){
            arr[i]=arr[i]*arr[i];
            s.insert(arr[i]);
        }
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=arr[i]+arr[j];
                if(s.find(sum)!=s.end()){
                    return true;
                }
            }
        }
        return false;
        
        
    }
};