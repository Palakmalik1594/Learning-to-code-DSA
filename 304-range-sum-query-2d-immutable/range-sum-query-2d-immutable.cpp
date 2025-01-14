class NumMatrix {
public:
vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        prefix.resize(n,vector<int>(m,0));
        int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=matrix[i][0];
        //     prefix[i][0]=sum;
        // }
        // sum=0;
        for(int i=0;i<m;i++){
            sum+=matrix[0][i];
            prefix[0][i]=sum;
        }
        sum=0;
        for(int i=0;i<n;i++){
            sum+=matrix[i][0];
            prefix[i][0]=sum;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]+matrix[i][j]-prefix[i-1][j-1];
            }
        }
        
    }
    
    int sumRegion(int x, int y, int a, int b) {
        int answer=prefix[a][b];
        if(x>=1){
            answer-=prefix[x-1][b];
        }
        if(y>=1){
            answer-=prefix[a][y-1];

        }
        if(x>=1 && y>=1){
            answer+=prefix[x-1][y-1];
        }
        return answer;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */