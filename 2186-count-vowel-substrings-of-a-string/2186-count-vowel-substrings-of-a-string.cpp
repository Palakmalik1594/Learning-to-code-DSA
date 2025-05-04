class Solution {
public:
bool isvowel(char ch){
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
    int countVowelSubstrings(string word) {
        int count=0;
    
            for(int i=0;i<word.length();i++){
                unordered_map<char,int>mp;
                for(int j=i;j<word.length();j++){
                    if(!isvowel(word[j])){
                        break;
                    }
                    mp[word[j]]++;
                    if(mp.size()==5){
                        count++;
                    }
                

            }
        }
        return count;
    }
};