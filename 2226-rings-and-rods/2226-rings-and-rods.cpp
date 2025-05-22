class Solution {
public:
    int countPoints(string rings) {
        int count=0;
        for(char j='0';j<='9';j++){
            bool r=false;
            bool g=false;
            bool b=false;
            for(int i=0;i<rings.length();i+=2){
                if(rings[i+1]==j){
                    if(rings[i]=='B') b=true;
                    if(rings[i]=='R') r=true;
                    if(rings[i]=='G') g=true;
                }
            }
            if(b && g && r){
                count++;
            }
        }
        return count;
    }
};