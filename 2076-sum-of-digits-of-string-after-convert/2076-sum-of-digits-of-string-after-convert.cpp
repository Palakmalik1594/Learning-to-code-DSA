class Solution {
public:
    int getLucky(string s, int k) {
        
        string su="";
        for(char c:s){
            
            int val=c-'a'+1;
            su+=to_string(val);
            
        }
        
        while(k>0){
            int sum=0;
        for(char m:su){
            
            sum+=m-'0';
        }
        su=to_string(sum);
        k--;
        }
        return stoi(su);
    }
};