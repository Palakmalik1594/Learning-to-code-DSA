class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0;
        for(int ch:arr){
            sum+=ch;
        }
        int left=0;
        for(int i=0;i<arr.size();i++){
            int rs=sum-left-arr[i];
            if(left==rs){
                return i;
            }
            left+=arr[i];
        }
        return -1;
    }
};