class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>d;
        set<int>ud;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i==j || j==k || k==i) continue;
                    int a=digits[i];
                    int b=digits[j];
                    int c=digits[k];
                    if(a==0) continue;
                    if(c%2!=0) continue;
                    int num=a*100+b*10+c;
                    ud.insert(num);
                }
            }
        }
        d.assign(ud.begin(),ud.end());
        return d;
    }
};