class Solution {
public:
int countmy(vector<int>&rows){
    int left=0;
    int right=rows.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(rows[mid]==0){
            right=mid-1;
        }
        else{
            left=mid+1;

        }
    }
        return left;
    
}
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>st;
        vector<int>weakestcount;
        for(int i=0;i<mat.size();i++){
            int count=countmy(mat[i]);
            st.push_back({count,i});
        }
            sort(st.begin(),st.end());
            for(int i=0;i<k;i++){
                weakestcount.push_back(st[i].second);
                
            
        }
        
       return weakestcount; 
    }
};