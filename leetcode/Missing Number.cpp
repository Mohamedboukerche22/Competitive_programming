class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(!binary_search(nums.begin(),nums.end(),0)){
            return 0;
        }
        else {
            int sum = accumulate(nums.begin(),nums.end(),0);
            return ((nums.size()*(nums.size()+1))/2) -sum;
        }
        
    }
};
