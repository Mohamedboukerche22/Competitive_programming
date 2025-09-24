//https://cses.fi/problemset/task/1666/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()


void dfs(int v,vector<vector<int>> &adj , vector<bool>& visited){
  visited[v] = 1;
  for(int u : adj[v]){
    if(!visited[u]){
      dfs(u,adj,visited);
    }
  }
}
int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
        int e,n;
        cin >> n >> e;
         vector<vector<int>>adj(n+2);
        vector<bool>visited(n+2,false);
        for(int i = 0 ; i< e ;i++){
          int u,v;
          cin >> u >> v;
          adj[u].pb(v);
          adj[v].pb(u);
        }
        vector<int>rep;
        for(int i = 1 ; i<=n;i++){
          if(!visited[i]){
            rep.pb(i);
            dfs(i,adj,visited);
          }
        }
        cout << sz(rep)-1<<"\n";
           for (int i = 1; i < sz(rep); i++) {
            cout << rep[i-1] << " " << rep[i] << "\n";
        }
  }
    return 0;
}
