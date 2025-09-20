//contact raouf to get the problem 
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastAOI;
    ll n,c;
    cin >> n>>c;
    vector<ll>dp(c+5);
    dp[0] = 1;
    vector<ll>a(c+5);
    for(ll i = 2 ; i<= n ;i++){
        vector<ll>prefix(c+5);
        prefix[0] = dp[0];
        for(ll j = 1;j<=c;j++){
            prefix[j] = prefix[j-1] + dp[j];
            prefix[j] %= MOD;
        }
       for(int j = 0 ; j<=  c;j++){
            ll l = prefix[j],r = 0;
            if (j - i >= 0) {
               r = prefix[j - i];
             }
            a[j] = (l-r+MOD)%MOD;
        }
        a.swap(dp); 
    }
    cout <<dp[c];
        
    
    
    return 0;
}
