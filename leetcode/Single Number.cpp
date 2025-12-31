//https://leetcode.com/problems/single-number/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ee = 0;
        for(int i = 0 ; i< nums.size();i++){
            ee ^= nums[i];
        }
        return ee;
        
    }
};
