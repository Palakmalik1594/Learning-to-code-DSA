class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int n=s.size();
                s.push_back(s[n-1]+s[n-2]);
            }else if(operations[i]=="D"){
                s.push_back(s.back()*2);
                }else if(operations[i]=="C"){
                    s.pop_back();
                    }else{
                s.push_back(stoi(operations[i]));
            }
        }
        int total=0;
        for(int t:s){
            total+=t;
        }
        return total;
    }
};