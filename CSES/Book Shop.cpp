//https://cses.fi/problemset/task/1158/
// DP ONE as raouf said 
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int knas(vector<int>&h ,vector<int>&s , int x){
  int n = sz(h);
  vector<int>dp(x+1,0);
  for(int i = 0 ; i<  n ;i++){
    for(int j = x; j>=h[i];j--){
      dp[j] = max(dp[j],dp[j-h[i]]+s[i]);
    }
  }
  return dp[x];
}

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
        int n , x;
        cin >> n >>x;
        vector<int>h(n),s(n);
        for(int i=0;i<n;i++)cin >>h[i];
        for(int i=0;i<n;i++)cin >>s[i];
        cout <<knas(h,s,x)<<"\n";

    }
    return 0;
}
