// time complexity is very bad improve it later 


class Solution {
public:
    int twoSum_two_pointers(vector<int>& nums, int target, int start) {
        int left = start;
        int right = nums.size() - 1;

        int best = nums[left] + nums[right];

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (abs(sum - target) < abs(best - target)) {
                best = sum;
            }

            if (sum == target) {
                return sum;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return best;
    }
    int twoSum_unordered_map(vector<int>& nums, int target,int start) {
        unordered_map<int,int>seen;
        int best = nums[start] + nums[start + 1];
        for(int i=start;i<nums.size();i++){
            int cm=target-nums[i];
            if(seen.find(cm)!=seen.end()){
                return nums[seen[cm]] + nums[i];
            }
            seen[nums[i]] = i;
        }
        return best;
    }

    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int best = nums[0] + nums[1] + nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int cmp=target-nums[i];
            //int pairSum = twoSum_unordered_map(nums,cmp,i+1);
            int pairSum = twoSum_two_pointers(nums,cmp,i+1);
            int sum=pairSum+nums[i];
            if (abs(sum - target) < abs(best - target)) {
                best = sum;
            }            
            if (best == target) {
                return best;
            }
        }
        return best;
        
    }
};
