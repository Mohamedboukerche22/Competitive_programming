//https://leetcode.com/problems/find-if-path-exists-in-graph/
class Solution {
public:
     bool visited[10000000];
    bool validPath(int n, vector<vector<int>>& edges, int node, int destination)
    {
        vector<vector<int>>adj(n);
        for(auto & e :edges){adj[e[0]].push_back(e[1]);adj[e[1]].push_back(e[0]);}
        
        return dfs(node,adj,destination);

        
    
    }
    private:
    bool dfs(int node , vector<vector<int>>& adj, int destination){
        if(visited[node]){return false;}
        if(node == destination){return true;}
        visited[node] = true;
        for(auto u : adj[node]){if(dfs(u,adj, destination)){return true;};}
        return false;
    }
};
