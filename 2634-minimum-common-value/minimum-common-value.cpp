class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int nn=nums2.size();
       int i=0;
       int j=0;
       while(i<n && j<nn){
        if(nums1[i]==nums2[j]){
            return nums1[i];
        }else if(nums1[i]<nums2[j]){
            i++;
        }else{
            j++;
        }
       }
       return -1; 
    }
};