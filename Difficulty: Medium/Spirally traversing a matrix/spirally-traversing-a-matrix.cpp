class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        vector<int>insi;
        int n=mat.size();
        int m=mat[0].size();
        int left=0;
        int right=m-1;
        int top=0;
        int bottom=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                
                insi.push_back(mat[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                insi.push_back(mat[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                insi.push_back(mat[bottom][i]);
            }
            bottom--;
                
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    insi.push_back(mat[i][left]);
                }
                left++;
            }
            
        }
        return insi;
    }
};