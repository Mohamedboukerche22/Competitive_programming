// time complexity is shit plz dont judge me  

class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums, int target,int start) {
        unordered_map<int,int>seen;
        vector<vector<int>>pp;
        for(int i=start;i<nums.size();i++){
            int cm=target-nums[i];
            if(seen.find(cm)!=seen.end()){
                pp.push_back({cm,nums[i]});
            }
            seen[nums[i]] = i;
        }
        return pp;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<(int)nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int cmp=-nums[i];
            vector<vector<int>>tmp = twoSum(nums,cmp,i+1);
            for (auto& p : tmp) {
                ans.push_back({nums[i], p[0], p[1]});
            }
         
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};
