class Solution {
public:
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(),tiles.end());
        vector<bool> used(tiles.size(),false);
        return track(tiles,used);
    }
    int track(string& tiles, vector<bool>& used){
        int count=0;
        for(int i=0;i<tiles.size();i++){
            if(used[i] || (i>0 && tiles[i]==tiles[i-1] && !used[i-1])) continue;
            used[i]=true;
            count+=1+track(tiles,used);
            used[i]=false;
        }
        return count;
    }
};