class Solution {

void flood(int i,int j,vector<vector<int>>& image,int n,int m,int oldcolor,int newcolor){
    if(i<0 || j<0 || i==n || j==m || image[i][j]!=oldcolor){
        return;
    }
    image[i][j]=newcolor;
    flood(i+1,j,image,n,m,oldcolor,newcolor);
    flood(i-1,j,image,n,m,oldcolor,newcolor);
     flood(i,j+1,image,n,m,oldcolor,newcolor);
    flood(i,j-1,image,n,m,oldcolor,newcolor);

}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor=image[sr][sc];
        if(oldcolor==color){
            return image;
        }
        int n=image.size();
        int m=image[0].size();
        flood(sr,sc,image,n,m,oldcolor,color);
        return image;
    }
};