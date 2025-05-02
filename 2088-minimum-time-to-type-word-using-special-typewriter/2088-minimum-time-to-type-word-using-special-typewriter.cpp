class Solution {
public:
    int minTimeToType(string word) {
        int time=0;
        int curr='a';
        for(char c:word){
            int dis=abs(c-curr);
            time+=min(dis,26-dis);
            time+=1;
            curr=c;
        }
        return time;
    }
};