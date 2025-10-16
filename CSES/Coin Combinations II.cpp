//https://cses.fi/problemset/task/1636/
#include <bits/stdc++.h>
using namespace std;
 
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
 
const int MOD = 1e9 +7;
const int N =1e6;
 
int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       ll n,s;
       cin >>n>>s;
       vector<ll>coins(n);
       vector<ll>dp(N);
       for(ll i = 0 ;i < n ;i++){
           cin >> coins[i];
       }
       dp[0] = 1;
       for(ll c:coins){
         for(ll x = 1;x<=s;x++){
        
            if(x-c>=0){
            dp[x] += dp[x-c];
            dp[x] %= MOD;
         } }
        }
 
       cout <<dp[s];
    }
    return 0;
}
