def isVowel(ch):
    return ch=="a" or ch=="e" or ch=="i" or ch=="o" or ch=="u" or ch=="A" or ch=="E" or ch=="I" or ch=="O" or ch=="U"
class Solution:
    
    def toGoatLatin(self, S: str) -> str:
        ch="ma"
        
        words=S.split(' ')
        ans=""
        for s in words:
            ch=ch+"a"
            if isVowel(s[0]):
                ans=ans+s+ch+" "
            else:
                ans=ans+s[1:]+s[0]+ch+" "
        return ans[:-1]
        
