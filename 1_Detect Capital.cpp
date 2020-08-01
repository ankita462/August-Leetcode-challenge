class Solution {
public:
    bool detectCapitalUse(string word) {
       int c=0,nc=0;
        if(word.length()==0) {
            return true;
        }
        if(word[0]>='A' && word[0]<='Z') {
            c=1;
        }
        else {
            nc=1;
        }
        for(int i=1;i<word.length();i++) {
            if(c) {
                if(word[i]>='A' && word[i]<='Z') {
                    c++;
                }
            }
            if(nc) {
                if(word[i]>='a' && word[i]<='z') {
                    nc++;
                }
            }
        }
        if(c==word.size() || c==1 || nc==word.size()) {
            return true;
        }
        return false;
    }
};
