// User function template for C++
bool compare(string a,string b){
           return a+b>b+a;
       }
class Solution {
  public:
  
    string findLargest(vector<int> &arr) {
        // code here
       vector<string>st;
       for(int num:arr){
           st.push_back(to_string(num));
       }
       sort(st.begin(),st.end(),compare);
       if(st[0]=="0"){
           return "0";
       }
       string res;
       for(int i=0;i<st.size();i++){
           res+=st[i];
       }
       return res;
    }
};