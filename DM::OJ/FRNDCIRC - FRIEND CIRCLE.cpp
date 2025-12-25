//https://www.spoj.com/problems/FRNDCIRC/

#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 2e5 +1;

class DSU{
public:
vector<int> parent, size;

DSU(int n){
    parent.resize(n);
    size.resize(n,1);
    for(int i = 0 ; i < n ;i++){
        parent[i] = i;
    }
}

int find(int u){
    if(u == parent[u]){
        return u ;
    } 
    return parent[u] = find(parent[u]);
}

int Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
        if(size[a] < size[b]){
            swap(a,b);
        }
        parent[b] = a;
        size[a] += size[b];

    }
    return size[a];

}
};
void solve(){
  int n;
  cin >> n;


  unordered_map<string,int>mp;
  mp.reserve(n*2);


  DSU dsu(n*2);

  int i = 0;

  while(n--)
  {
    string a,b;
    cin >> a >> b;
    if(!mp.count(a)){
        mp[a] = i++;
    }
    if(!mp.count(b)){
        mp[b] = i++;
    }
        //mp[b] = max(mp[b], mp[a] + 1);
    
    //(mp[a] > mp[b]) ? mp[b] = mp[a] + 1: mp[b] = mp[a] +1 ;
    
    cout <<dsu.Union(mp[a],mp[b]) <<"\n";

  }
 
}
 
int main() {
    fastAOI;
    int t ;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
