class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                reverse(word.begin(),word.begin()+i+1);
                break;
            }
        }
        return word;
    }
};