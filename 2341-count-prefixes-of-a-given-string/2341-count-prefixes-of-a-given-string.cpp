class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        vector<string>prefixes;
        int count=0;
        for(int i=1;i<=s.length();i++){
            prefixes.push_back(s.substr(0,i));
        }
       for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < prefixes.size(); j++) {
                if (words[i] == prefixes[j]) {
                    count++;
                    break;
                }
            }
        }
    return count;

            }
    
};