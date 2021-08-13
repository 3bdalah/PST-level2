// Leetcode Website Challange May
// URL Problem  : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(256,0);
        for(char x : magazine){
            freq[x]++;
        }
        for(char x : ransomNote){
            if(freq[x]>0){
                freq[x]--;
            }else{
                return false;
            }
        }
        return true;
    }
};