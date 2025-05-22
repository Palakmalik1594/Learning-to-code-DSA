class Solution {
public:
    string capitalizeTitle(string title) {
        for(char &c:title){
            c=tolower(c);
        }
        title+=' ';
       if(title[0]!=' '&& title[1]!=' '&& title[2]!=' '){
                title[0]=toupper(title[0]);
               }
        for(int i=0;i<title.length()-1;i++){
                if(title[i]==' '){
                    if(title[i+1]!=' ' && title[i+2]!=' ' && title[i+3]!=' '){
                    title[i+1]=toupper(title[i+1]);
                    }
                }
        }
        title.pop_back();
        return title;
    }
};