class Solution {
public:
vector<string>ans;
vector<char>seq;
void recur(int index,int sum,int L){
    if(index==L){
        if(sum==0){
                 string chars="";
                 for(auto x:seq){
                    chars+=x;
                 }
                 ans.push_back(chars);
        }      
        return;
    }
    if(sum+1<=(L/2)){
    seq.push_back('(');
    recur(index+1,sum+1,L);
    seq.pop_back();
    }

    if(sum>0){
        seq.push_back(')');
        recur(index+1,sum-1,L);
        seq.pop_back();

    }

}
    vector<string> generateParenthesis(int n) {
             recur(0,0,2*n);
             return ans;
        
    }
};