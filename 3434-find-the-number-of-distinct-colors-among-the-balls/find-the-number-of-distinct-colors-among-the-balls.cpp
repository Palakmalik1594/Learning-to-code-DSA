class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>ballcolor;
        unordered_map<int, int> colorCount;
        unordered_set<int>distinctc;
        vector<int>result;
        for(auto& query:queries){
            int ball=query[0] , color=query[1];
            if(ballcolor.find(ball)!=ballcolor.end()){
                int oldcolor=ballcolor[ball];
               colorCount[oldcolor]--;
                if (colorCount[oldcolor] == 0) {  
                    distinctc.erase(oldcolor);
                }
            }
                ballcolor[ball]=color;
                colorCount[color]++;
                distinctc.insert(color);
                result.push_back(distinctc.size());
        }
            return result;
        



    }
};