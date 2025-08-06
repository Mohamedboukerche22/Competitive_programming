//https://leetcode.com/problems/maximum-subarray/
// using Kadane’s Algorithm
class Solution {
public:
    int kadane(vector<int>& nums)
    {
        int maxa = nums[0];
        int sum = nums[0];
        for(int i = 1 ; i < nums.size();i++ )
        {
            sum = max(nums[i],sum + nums[i]);
            maxa = max(maxa , sum);

        }
        return maxa;
    }
    int maxSubArray(vector<int>& nums) 
    {
        return kadane(nums);
    }
};
