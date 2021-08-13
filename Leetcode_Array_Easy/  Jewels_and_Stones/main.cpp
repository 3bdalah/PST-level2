// Leet code Website 
// URL : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int n = jewels.length();
        int m = stones.length();
        
        unordered_set<char> Jewels;
        
        for(char x : jewels){
            Jewels.insert(x);
        }
        int ans=0;
        for(char x : stones){
            if(Jewels.find(x)!= Jewels.end()){
                ans++;
            }
        }
        return ans++;
    }
};