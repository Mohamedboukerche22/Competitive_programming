class Solution {
  public:
  void dfss(int n,vector<vector<int>>& adj,vector<bool>&visited,vector<int>&ans){
      visited[n] = true;ans.push_back(n);
            for(auto u:adj[n]){
               if(!visited[u]){
                    dfss(u,adj,visited,ans);
                }
            }
        
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<bool>visited(adj.size(),false);
        vector<int>ans;
        dfss(0,adj,visited,ans);
        return ans;
    }

    vector<int> bfs(vector<vector<int>> &adj){
        vector<bool>visited(adj.size(),false);
        vector<int>ans;
        ans.push_back(0);
        bfss(0,visited,ans,adj);
        return ans;
    }
    void bfss(int start,vector<bool>&visited,vector<int>&ans,vector<vector<int>> &adj){
        visited[start]=true;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto v:adj[u]){
                if(!visited[v]){
                    visited[v]=true;
                    ans.push_back(v);
                    q.push(v);
                }
            }
        }
        
    }





};
