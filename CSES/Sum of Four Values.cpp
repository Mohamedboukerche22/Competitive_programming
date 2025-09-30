//https://cses.fi/problemset/task/1642/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

bool check(vector<int>aa){
    set<int>s ;
    for(int i :aa){
        s.insert(i);
    }
    if(sz(s)==4){
        return true;
    }else{
        return false;
    }

}
vector<int> foursum(vector<int>& p,int target){
    int n = p.size();
    unordered_map<int,vector<pair<int,int>>>mp;
    for(int i = 0 ; i< n;i++){
        for(int j = i+1;j<n;j++){
        mp[p[i]+p[j]].pb({i+1,j+1});
        }
    }
    for(auto &it:mp){
        int s1=it.first;
        int s2 = target - s1;
        if(mp.count(s2)){
            for(auto &i: it.second){
                for(auto &k : mp[s2]){
                    if(check({i.first,i.second,k.second,k.first})){
                        return {i.first,i.second,k.second,k.first};
                    }
                }
            }
        }
    }
    
    return {-1,-1,-1,-1};
}

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int n,x;
       cin >>n >>x;
       vector<int>p(n);
       for(int &i:p)cin >>i;
     vector<int>ans = foursum(p,x);
      if(ans[0] == -1){
       cout <<"IMPOSSIBLE";
      }else{
        sort(all(ans));
        for(int i:ans)cout <<i<<" ";
      }
    }
    return 0;
}
