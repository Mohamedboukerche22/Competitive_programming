//https://cses.fi/problemset/task/1629/
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
    // cin >> t;
    while (t--) {
      ll n;
      cin >> n;
      vector<pair<ll,ll>>arr;
      for(ll i = 0 ; i<  n;i++){
        ll a ,b;
        cin >> a >> b;
        arr.pb({a,b});
      }
       sort(all(arr), [](auto &a, auto &b) {return a.second < b.second;});
      ll curr =-1000;
      ll ans = 0;
      for(ll i= 0 ;i< n;i++){
        if(arr[i].first >= curr){
          curr =arr[i].second;
          ans++;
        }
      }
      cout <<ans<<"\n";
    }
    return 0;
}
