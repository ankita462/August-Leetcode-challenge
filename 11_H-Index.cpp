class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        sort(citations.begin(),citations.end());
        if(n==0) {
            return 0;
        }
        for(int i=0;i<n;i++) {
            if(n-i<=citations[i]) {
                return n-i;
            }
        }
        return 0;
    }
};
