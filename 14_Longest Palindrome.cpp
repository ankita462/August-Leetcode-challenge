class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mapp;
        for(int i=0;i<s.length();i++) {
            mapp[s[i]]++;
        }
        int res=0;
        int e=0;
        for(auto it=mapp.begin();it!=mapp.end();it++) {
            if((it->second)%2!=0) {
                res+=it->second-1;
                e=1;
            }
            else {
                res+=(it->second);
            }
        }
        return res+e;
    }
};
