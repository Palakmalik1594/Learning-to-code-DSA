class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>si;
        for(char c:s){
            if(!si.empty() && si.top()==c){
                si.pop();
            }else{
                si.push(c);
            }
        }
        string r="";
        while(!si.empty()){
        r=si.top()+r;
        si.pop();
        }
        return r;
    }
};