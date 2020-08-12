class Solution {
public:
    void buildTriangle(vector<int> &temp,int rowIndex){
    temp.push_back(1);
    for(long long int j=0;j<rowIndex;j++){
        vector<int>temp2;
        temp2.push_back(1);
        for(long long int i=0;i<temp.size()-1;i++){
            temp2.push_back(temp[i]+temp[i+1]);
        }
        temp2.push_back(1);
        temp.clear();
        temp=temp2;
    }
}
    
    vector<int> getRow(int rowIndex) {
        vector<int>temp;
        buildTriangle(temp,rowIndex);        
        return temp;
    }
};
