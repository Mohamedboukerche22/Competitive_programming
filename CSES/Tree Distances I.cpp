//https://cses.fi/problemset/task/1132/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()


pair<ll,ll> bfs(ll start,vector<vector<ll>>&graph, vector<ll>& dist){
  int n = graph.size();
  fill(dist.begin(), dist.end(), -1);
  queue<ll>q;
  q.push(start);
  dist[start] = 0;
  while(!q.empty()){
    ll v = q.front();
    q.pop();
    for(auto u : graph[v]){
      if(dist[u] == -1){
        dist[u] = dist[v] +1;
        q.push(u);
      }
    }
  }
  ll far = start;
  for(ll i = 1 ; i< n ;i++){
    if(dist[i]>dist[far]){
      far = i;
    }
  }
  return {far,dist[far]};
}
int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       ll n;
       cin >>n;
       vector<vector<ll>>graph(n+1);
       for(int i = 0 ; i< n-1 ;i++){
        ll u,v;
        cin >>u >>v;
        graph[u].pb(v);
        graph[v].pb(u);
       }
       
       /*for(int i = 1 ; i< n +1;i++){
        auto first = dfs(i,graph);
        cout << first.second<<" ";
       }*/
        vector<ll> dist(n+1);

    auto A = bfs(1, graph, dist);   
    auto B = bfs(A.first, graph, dist);   
    vector<ll> distA = dist;
    bfs(B.first, graph, dist);       
    vector<ll> distB = dist;

    for(int i = 1; i <= n; i++){
        cout << max(distA[i], distB[i]) << " ";
    }
       
    }
    return 0;
}
