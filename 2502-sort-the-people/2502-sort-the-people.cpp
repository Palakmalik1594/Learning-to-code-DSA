class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>people(names.size());
        for(int i=0;i<heights.size();i++){
            people[i]={heights[i],names[i]};
        }
        vector<string>result;
        sort(people.rbegin(),people.rend());
        for(auto &it:people){
               result.push_back(it.second);
        }
        return result;
    }
};