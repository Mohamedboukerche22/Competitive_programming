//https://cses.fi/problemset/task/1634/
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N =1e7;

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int n,T;
       cin >>n>>T;
       vector<int>coin(n);
       for(int &i:coin) cin >> i;
       vector<int>dp(T+1,-1);
       dp[0] = 0;

       for(int x = 1;x<=T;x++){
        dp[x] = N;
        for(int c : coin){
         if(x-c >=0){
         dp[x] = min(dp[x],dp[x-c]+1);
         }    
       }
       }
       if(dp[T] >= N)cout <<-1;
       else cout <<dp[T];
    }
    return 0;
}
