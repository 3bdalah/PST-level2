// Leetcode Website Challange
// url problems  https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/


class Solution {
public:
    int findComplement(int num) {
        int n = floor(log2(num))-1;
        int mask=1;
        while(n--){
            num = num^mask;
            mask = mask<<1;
        }
        return num;
    }
};