class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD=1000000007;
        int oddc=0,evenc=1,prefs=0,res=0;
        for(int num:arr){
            prefs+=num;
            if(prefs%2==0){
                res=(res+oddc)%MOD;
                evenc++;
            }else{
                res=(res+evenc)%MOD;
                oddc++;
            }
        }
        return res;
    }
};