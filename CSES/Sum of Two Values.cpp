//https://cses.fi/problemset/task/1640/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

vector<pair<int,int>> BBS( vector<int> &a ){
    vector<pair<int,int>>ans;
    int n = a.size();
    for(int i = 0 ; i< n;i++){
        ans.pb({a[i],i});
    }
    sort(all(ans));
    return ans;
}
pair<int,int> twosum(vector<int>& p,int target){
    vector<pair<int,int>>pa = BBS(p);
    int n = p.size();
    int l = 0,r = n-1;
    while(r > l){
        int sum = pa[l].first + pa[r].first;
        if(sum==target){
            return {pa[l].second+1,pa[r].second+1};
        }else if(sum < target){
            l++;
        }else{
            r--;
        }

    }
    return {-1,-1};
}

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int n,x;
       cin >>n >>x;
       vector<int>p(n);
       vector<int>res(n,0);
       for(int &i:p)cin >>i;

      pair<int,int>a = twosum(p,x);
      if(a.first==-1){
        cout <<"IMPOSSIBLE";
      }else{
        cout <<min(a.first,a.second) <<" "<<max(a.second,a.first);
      }
    }
    return 0;
}
