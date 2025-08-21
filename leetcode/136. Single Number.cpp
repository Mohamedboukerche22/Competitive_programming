// https://leetcode.com/problems/single-number
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int tmp = 0;
        for(int i : nums){
         tmp ^= i;
        }
        return tmp;
    }
};
