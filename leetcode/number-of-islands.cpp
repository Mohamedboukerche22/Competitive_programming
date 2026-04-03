//https://leetcode.com/problems/number-of-islands
class Solution {
public:
   void bfs(int i ,int j,vector<vector<char>>& grid,vector<vector<bool>>&visited){
    int n=grid[0].size(),m=grid.size();
    queue<pair<int,int>>q;
    visited[i][j]=true;
    q.push({i,j});
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int nx = dx[k]+x;
            int ny = dy[k]+y;
            if(nx>=0&&ny>=0&&ny<n&&nx<m&&!visited[nx][ny]&&grid[nx][ny]=='1'){
                visited[nx][ny]=true;q.push({nx,ny});
            }
        }
    }

   }
    int numIslands(vector<vector<char>>& grid) {
    int n=grid[0].size(),m=grid.size();int cnt=0;
    vector<vector<bool>>visited(m,vector<bool>(n,false));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j] && grid[i][j] == '1'){
                bfs(i,j,grid,visited);cnt++;
            }
        }
    }
    return cnt;
        
    }
};
