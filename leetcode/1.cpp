class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<pair<int, int>> st;
        int m = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            int n = nums[i];
            while (!st.empty() && n >= st.top().first) {
                st.pop();
            }
            if (!st.empty() && n > st.top().second) {
                return true;
            }
            st.push(make_pair(n, m));
            m = min(m, n);
        }

        return false;        
    }
};
