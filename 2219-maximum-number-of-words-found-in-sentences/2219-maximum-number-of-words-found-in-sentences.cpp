class Solution {
public:
    int mostWordsFound(vector<string>& se) {
        vector<int>s;
        for(string ss:se){
            int count=1;
            for(int i=0;i<ss.length();i++){
                if(ss[i]==' '){
                count++;
                }
            }
            s.push_back(count);

        }
        sort(s.rbegin(),s.rend());
        return s[0];
    }
};