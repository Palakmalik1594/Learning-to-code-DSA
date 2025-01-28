class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>s={};
        for(auto word:wordList){
            s.insert(word);
        }

        int answer=0;
        queue<string>q;
        q.push(beginWord);
        map<string,int>distance;
        distance[beginWord]=0;
        while(!q.empty())
        {
            string topWord=q.front();
            if(topWord==endWord){
                break;
            }
            string currentWord=topWord;
            q.pop();
            for(int i=0;i<topWord.length();i++){
                char currentLetter=topWord[i];
                for(char ch='a';ch<='z';ch++){
                    if(currentLetter!=ch){
                        topWord[i]=ch;
                        if(s.find(topWord)!=s.end()&& distance.find(topWord)==distance.end()){            
                            q.push(topWord);
                            distance[topWord]=distance[currentWord]+1;
                        }
                        topWord[i]=currentLetter;
                    }
                }
            }
        }
        if(distance.find(endWord)!=distance.end()){
            answer=distance[endWord]+1;
        }
        return answer;
    }
};