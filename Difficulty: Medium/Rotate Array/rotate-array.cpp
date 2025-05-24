class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        vector<int>temp(n);
        for(int i=0;i<arr.size();i++){
            temp[i]=arr[(i+d)%n];
        }
        arr=temp;
        
        
    }
};