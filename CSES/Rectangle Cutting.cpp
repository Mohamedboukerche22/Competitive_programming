//https://cses.fi/problemset/task/1744/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int INF = 1e9;
const int MOD = 1e9 +7;
int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int a,b;
       cin >>a >>b;
       vector<vector<int>>dp(a+1,vector<int>(b+1,1e9));
       if(a == b){
        cout <<0;
       }else{
        for(int i = 0 ; i <= a ;i++){
          for(int j= 0 ; j <= b ;j++){
            if (i == j) dp[i][j] = 0;
            else{
              for(int k = 1; k<i;k++){
                dp[i][j] = min(dp[i][j], dp[i-k][j] + dp[k][j] + 1);
              }
              for(int k = 1 ; k<j;k++){
                dp[i][j] = min(dp[i][j] , dp[i][j-k] + dp[i][k] +1 );
              }
            }
            
        }
        
        }
        cout <<dp[a][b];
       }

       
    }
    return 0;
}
