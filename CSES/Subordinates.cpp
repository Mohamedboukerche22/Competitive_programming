//https://cses.fi/problemset/task/1674/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
bool visited[1000005];
vector<vector<int>>adj(100005);
vector<int>res;
int dfs(int n){
   int count = 0;
  for(auto u : adj[n]){
      count+= 1+ dfs(u);
  }
  res[n] = count;
  return count;
}

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int n;
       cin >> n;
       adj.assign(n+1,{});
       res.assign(n+1,0);
       for(int i = 2;i<=n;i++){
        int u ; cin >>u; adj[u].pb(i);
       }
       dfs(1);
       reverse(all(res));
       int last = res.back();  
       res.pop_back(); 
       reverse(all(res));
       for(int i = 0 ;i < n ;i++){
        cout <<res[i]<<" ";
       }
       
    }
    return 0;
}
