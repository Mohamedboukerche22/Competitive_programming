//https://cses.fi/problemset/task/1192/
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int main() {
    fastAOI;
    int t = 1;
    while (t--) {
        int n,m;
        cin >> n >> m;
        vector<string>grid(n+1);
        for(int i = 0 ; i< n  ;i++){
          cin >> ws;
          getline(cin, grid[i]);
        }
        int dx[4] ={1 ,-1 ,0 ,0};
        int dy[4] ={0 ,0 , 1, -1};
        int rooms = 0;

        auto bfs = [&](int x,int y){
          queue<pair<int,int>>q;
          q.push({x,y});
          grid[x][y] = '#';
          while(!q.empty()){
            auto [cx,cy] = q.front();
            q.pop();
            for(int i = 0 ; i < 4 ;i++){
              int nx = cx + dx[i] ,ny = cy + dy[i];
            if(nx >=0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '.'){
              grid[nx][ny] = '#';
              q.push({nx,ny});
            }
            }
          }
        };
        for(int i = 0;i<n;i++){
          for(int j = 0 ; j <m ;j++){
            if(grid[i][j] == '.'){
              rooms++;
              bfs(i,j);
            }
          }
        }
        cout <<rooms<<"\n";
    }
    return 0;
}
