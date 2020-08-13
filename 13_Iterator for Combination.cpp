class CombinationIterator {
public:
    CombinationIterator(string chars, int len) {
        gen(chars,len);
        iter=0;
        sz=all.size();
    }
    
    string next() {
        return all[iter++];
    }
    
    bool hasNext() {
        return iter<sz;
    }
private:
    vector<string>all;
    int sz;
    int iter;
    void gen(string chars,int len,int i=0,string str=""){
        if(len<0)
            return;
        if(i>=chars.length()){
            if(len==0)
                all.push_back(str);
            return;
        }
        gen(chars,len-1,i+1,str+chars[i]);
        gen(chars,len,i+1,str);
    }
};


/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
