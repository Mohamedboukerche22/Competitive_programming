//https://leetcode.com/problems/maximum-gap/
class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)return 0;
        sort(nums.begin(),nums.end());
        int diff = 0;
        for(int i = 1 ; i < n ;i++)
        {
            if(nums[i]-nums[i-1]>diff){diff = nums[i]-nums[i-1];}
        }
        return diff;
        
    }
};
