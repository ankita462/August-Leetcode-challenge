class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> v(num_people,0);
        int count_candies=1;
        while(candies) {
            for(int i=0;i<num_people;i++) {
                if(candies<count_candies) {
                    v[i]+=candies;
                    return v;
                }
                else {
                    v[i]+=count_candies;
                    candies-=count_candies;
                    count_candies++;
                }
            }
        }
        return v;
    }
};
