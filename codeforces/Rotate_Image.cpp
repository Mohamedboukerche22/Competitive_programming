// https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix[0].size();
        vector<vector<int>>ar(n,vector<int>(n));
        for(int i = 0 ; i < n ; i++){for(int j = 0;j<n;j++){
            ar[i][j] = matrix[j][i];
        }}
        for(auto & i:ar){reverse(i.begin(),i.end());}
        matrix.clear();
        matrix = ar;
        
    }
};
