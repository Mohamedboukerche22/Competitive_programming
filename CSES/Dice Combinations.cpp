//https://cses.fi/problemset/task/1633/
//dp prb
#include<bits/stdc++.h>
using namespace std;
int const MOD = 1e9 + 7;

int main(){
    int n;
    cin >> n;
    vector<int>dp(n + 1 ,0);
    dp[0] = 1;
    for(long long x = 1;x <= n; ++x){
        long long ways = 0;
        for(long long i = 0 ; i <= 6 ;++i){
           if(x - i >= 0){
            ways += dp[x - i];
           }
        }
        dp[x] = ways % MOD;
    }
    cout << dp[n];
    
    
}
