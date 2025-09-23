//https://cses.fi/problemset/task/1667/
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
        int n,e;
        cin >> n >> e;
        vector<vector<int>>adj(n+1);
        for(int i = 0 ; i< e ;i++){
          int a,b;
          cin >> a >> b;
          adj[a].pb(b);
          adj[b].pb(a);
        }
        int start ,target;
        start = 1;
        target = n;
        vector<int>dist(n+1,-1),parent(n+1,-1);
        queue<int>q;
        dist[start] = 0;
        q.push(start);
        while(!q.empty()){
          int v = q.front();
          q.pop();
          for(int u : adj[v]){
            if(dist[u] == -1){
              dist[u] = dist[v]+1;
              parent[u] = v;
              q.push(u);
            }
          }
        }
        if(dist[target] == -1){
          cout <<"IMPOSSIBLE";
           return 0;
        }else{
          cout << dist[target]+1<<"\n";
          vector<int>path;
          for(int v = target ; v != -1 ; v = parent[v]){
            path.pb(v);
          }
          reverse(path.begin(),path.end());
          for(int i : path){
            cout <<i<<" ";
          }
        }
    }
    return 0;
}
