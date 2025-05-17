class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        int k=n*0.05;
        double sum=0;
        if(n==1 || n==0){
            return n;
        }
        sort(arr.begin(),arr.end());
        for(int i=k;i<n-k;i++){ 
                sum+=arr[i];
        }
        sum=sum/(n-2*k);
        return sum;
    }
};