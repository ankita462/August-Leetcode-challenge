// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int random = 0;
    for(int i = 0; i < 7; i++)
        random += rand7();
    return random % 10 + 1;
    }
};
