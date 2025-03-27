class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>numst;
        for(int i=0;i<nums1.size();i++){
            numst.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            numst.push_back(nums2[i]);
        }
        sort(numst.begin(),numst.end());
        int n=numst.size();
        if(n%2==1){
            return numst[n/2];
        }else{
            return ((numst[n/2-1]+numst[n/2])/2.000);
        }
        
    }
};