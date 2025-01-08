class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int maxi=*max_element(salary.begin(),salary.end());
        int mini=*min_element(salary.begin(),salary.end());
        double t=0;
        for(int s:salary){
            if(s!=maxi && s!=mini){
                t+=s;
            }
        }
        return t/(n-2);
    }
};