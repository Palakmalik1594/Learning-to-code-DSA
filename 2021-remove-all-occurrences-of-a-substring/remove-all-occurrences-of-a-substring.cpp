class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
       while((s.find(part))!=string::npos){
        unsigned index=s.find(part);
        s.erase(index,part.size());
       }
       return s;
    }
};