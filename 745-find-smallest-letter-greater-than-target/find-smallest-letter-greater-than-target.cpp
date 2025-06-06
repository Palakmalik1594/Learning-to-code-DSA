class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int r=letters.size()-1;
        int ans=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(letters[mid]==target){
                l=mid+1;
            }
            else if(letters[mid]>target){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return letters[ans];
    }
};