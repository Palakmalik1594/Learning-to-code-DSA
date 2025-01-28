class Solution {
public:
bool issafe(int i,int j,int n,vector<vector<char>>&chessboard){
    //up
    int tempi=i;
    int tempj=j;
    while(tempi>=0){
        if(chessboard[tempi][j]=='Q'){
            return false;
        }
        tempi--;
    }
    

    //up right
    tempi=i;
    tempj=j;
    while(tempi>=0 && tempj<=n-1){
        if(chessboard[tempi][tempj]=='Q'){
            return false;
        }
        tempi--;
        tempj++;
    }
    //up left
    tempi=i;
    tempj=j;
    while(tempi>=0 && tempj>=0){
        if(chessboard[tempi][tempj]=='Q'){
            return false;
        }
        tempi--;
        tempj--;
    }

    return true;
    
}
void help(int i,int n,vector<vector<char>>&chessboard,vector<vector<string>>&ans){
    if(i==n){
        vector<string>temp;
        for(int j=0;j<n;j++){
            string st="";
            for(int k=0;k<n;k++){
                st.push_back(chessboard[j][k]);
            }
            temp.push_back(st);
        }
        ans.push_back(temp);
        return;
    }
    for(int j=0;j<n;j++){
        if(issafe(i,j,n,chessboard)){
            chessboard[i][j]='Q';
            help(i+1,n,chessboard,ans);
            chessboard[i][j]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>>chessboard(n,vector<char>(n,'.'));
        vector<vector<string>>ans;
        help(0,n,chessboard,ans);
        return ans;
    }
};