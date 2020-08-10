class Solution {
public:
    int titleToNumber(string s) {
        // int res=0;
        // for(int i=0;i<s.size();i++) {
        //     res=res*26+(int)(s[i]-'A'+1);
        // }
        // return res;
        // Second Solution
        int res=0;
        int power=0;
        for(int i=s.length()-1;i>=0;i--) {
            res+=((int)(s[i]-'A'+1))*pow(26,power);
            power++;
        }
        return res;
    }
};
