//https://cses.fi/problemset/task/1641/
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
        ans.pb({a[i],i+1});
    }
    sort(all(ans));
    return ans;
}
tuple<int,int,int> twosum(vector<int>& p,int target){
    vector<pair<int,int>>pa = BBS(p);
    int n = p.size();
    
    for(int i = 0 ; i< n-2;i++){
    int third = target - pa[i].first;
    int l = i+1,r = n-1;
     while(r > l){
        int sum = pa[r].first + pa[l].first;
        if(sum == third){
            return {pa[i].second,pa[r].second,pa[l].second};
        }else if(sum < third){
            l++;
        }else{
            r--;
        }
     }
   }
    return {-1,-1,-1};
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

      tuple<int,int,int>a = twosum(p,x);
      if(get<0>(a)==-1){
       cout <<"IMPOSSIBLE";
      }else{
        vector<int>ans(3);
        ans[0]=get<0>(a);
        ans[1]=get<1>(a);
        ans[2]=get<2>(a);
        sort(all(ans));
        for(int i:ans)cout <<i<<" ";
        
      }
    }
    return 0;
}
