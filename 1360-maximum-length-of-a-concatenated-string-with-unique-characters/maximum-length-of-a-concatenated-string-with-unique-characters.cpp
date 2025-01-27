class Solution {
private:
bool compare(vector<int> &selected,string& currentstring){
    vector<int> selfcheck(26,0);
    for(int i=0;i<currentstring.size();i++){
        if(selfcheck[currentstring[i]-'a']==1){
            return false;
        }
        selfcheck[currentstring[i]-'a']=1;
    }
    for(int i=0;i<currentstring.size();i++){
        if(selected[currentstring[i]-'a']==1){
            return false;
        }
    }
        return true;
     
}
int help(int i,vector<string>&arr,vector<int>&selected,int len){
    if(i==arr.size()){
        return len;
    }
    string currentstring=arr[i];
    if(compare(selected,currentstring)==false){
        return help(i+1,arr,selected,len);
    }else{
        //pick
        for(int j=0;j<currentstring.size();j++){
            selected[currentstring[j]-'a']=1;
        }
        len+=currentstring.size();
        int op1=help(i+1,arr,selected,len);

        //skip
        for(int j=0;j<currentstring.size();j++){
            selected[currentstring[j]-'a']=0;
        }
        len-=currentstring.size();
        int op2=help(i+1,arr,selected,len);
        return max(op1,op2);
    }
}
public:
    int maxLength(vector<string>& arr) {
        vector<int> selected(26,0);
        return help(0,arr,selected,0);
    }
};