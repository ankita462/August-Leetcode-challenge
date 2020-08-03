class Solution {
public:
    bool isPalindrome(string s) {
         if(s.length() == 1)
            return true;
        
        string str = removeSpacesAndPunctuation(s);
        cout<<str;
        int left = 0, right = str.length()-1;
        while(left <= right)
        {
            if(str[left] == str[right])
            {
                left++;
                right--;
            }
            else return false;
        }
        return true;
    }
    string removeSpacesAndPunctuation(string s)
    {
        string ans;
        
        for(char c : s)
        {
            if(isalpha(c))
                ans+=tolower(c);
            else if(isdigit(c))
                ans+=c;
        }
        return ans;
    }
};
