class Solution {
public:
    bool isPerfectSquare(int num) {
        if(trunc(sqrt(num))*trunc(sqrt(num)) == num)return true;
        return false;
    }
};