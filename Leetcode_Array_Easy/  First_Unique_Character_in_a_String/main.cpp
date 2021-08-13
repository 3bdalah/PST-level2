// Leetcode Website 
// URL Challange https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(char c : s){
            freq[c-'a']++;
        }
        int ans=-1;
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a'] == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};

