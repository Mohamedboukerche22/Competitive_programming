//https://cses.fi/problemset/task/1633/
//dp prb
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 1e6;
const int MOD = 1e9 +7;

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       ll n;
       cin >> n;
    vector<int>dis = {1,2,3,4,5,6};
    vector<int>dp(n+5);
    dp[0] = 1;
    for(int x = 1 ; x<= n ;x++)
    {
        for(int c :dis){
            if(x-c>=0){
                dp[x] += dp[x-c] ; 
                dp[x] %= MOD;
            }
        }
    }
       cout <<dp[n]<<"\n";
    }
    return 0;
}
