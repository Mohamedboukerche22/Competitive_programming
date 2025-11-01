//https://cses.fi/problemset/task/1669/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int n,m;
vector<vector<int>>adj;
vector<int>visited,parent;
int s = -1 , e = -1;
bool bfs(int u ,int p){
    visited[u] =1;
    for(int v : adj[u]){
        if(v == p){
            continue;
        }if(visited[v]){
        s = v;
        e = u;
        return true;
    }
    parent[v] =u;
    if(bfs(v,u)){
        return true;
    }
    }
    return false;
}



int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
        cin >>n >>m;
        adj.assign(n+1,{});
        visited.assign(n+1,0);
        parent.assign(n+1,-1);
        for(int i = 0 ; i< m ;i++){
           int a,b;
           cin >>a>>b;
           adj[a].pb(b);
           adj[b].pb(a);
        }
        for(int i = 1 ; i<=n;i++){
            if(!visited[i] && bfs(i,-1)){
                break;
            }
        }
        if(s == -1){
            cout<<"IMPOSSIBLE\n";
        }else{
            vector<int>cycle;
            cycle.pb(s);
            for(int v = e ; v != s ;v = parent[v]){
                cycle.pb(v);
            }
            cycle.pb(s);
            reverse(all(cycle));

            cout<<sz(cycle)<<"\n";
            for(int c : cycle){
                cout<<c<<" ";
            }
            cout <<"\n";

        }

    }
    return 0;
}
