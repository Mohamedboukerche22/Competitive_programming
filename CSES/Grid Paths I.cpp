//https://cses.fi/problemset/task/1638/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

const int MOD = 1e9 +7;
int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<string>arr(n);
        for(int i = 0 ; i< n ;i++)cin >> arr[i];
        vector<vector<ll>>dp(n,vector<ll>(n));
        dp[0][0] = 1;
        for(ll i = 0 ; i< n ;i++){
            for(ll j = 0 ; j<  n ;j++){
                if(arr[i][j] == '*'){
                    dp[i][j] = 0;
                    continue;
                }
                if(j > 0){
                    dp[i][j] += dp[i][j-1];
                    dp[i][j] %=MOD;
                }
                if(i > 0){
                    dp[i][j] += dp[i-1][j];
                     dp[i][j] %=MOD;
                }
            }
        } 
        //for(auto i : dp){for(int a:i){cout<<a<<" ";}cout<<endl;}
        cout<<dp[n-1][n-1] ;      
    }
    return 0;
}
