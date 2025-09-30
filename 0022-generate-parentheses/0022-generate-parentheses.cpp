class Solution {
public:
    void help(int open,int close,int& n,vector<string>&ans,string& op){
        if(open==0 && close==0){
            ans.push_back(op);
            return;
        }
        if(open>0){
            string op1=op;
            op1.push_back('(');
            help(open-1,close,n,ans,op1);
        }
        if(close>open){
            string op2=op;
            op2.push_back(')');
            help(open,close-1,n,ans,op2);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        vector<string>ans;
        string op="";
        help(open,close,n,ans,op);
        return ans;
    }
};