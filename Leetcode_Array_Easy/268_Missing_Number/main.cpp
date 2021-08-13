// Leetcode Problems Array
// URL Problem https://leetcode.com/problems/missing-number/submissions/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        long long int sum1=0,sum2=0;
        for(int i=0;i<len;i++){
            sum1+=nums[i];
            sum2+=i;
        }
        return (len+(sum2-sum1));
    }
};