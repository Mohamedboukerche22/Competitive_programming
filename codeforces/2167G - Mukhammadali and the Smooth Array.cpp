//https://codeforces.com/problemset/problem/2167/G
#include <bits/stdc++.h>
using namespace std;
// this is 1600 btw lol

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int main() {
    fastAOI;
    int t = 1;
     cin >> t;
    while (t--) {
        ll n;
        cin >>n;
        vector<ll>a(n),c(n);
        for(ll i = 0 ; i <n  ;i++){
         cin >>a[i];
        }
        for(ll i = 0 ; i <n  ;i++){
         cin >>c[i];
        }

        vector<ll>dp(n);
        ll sum = 0;
        for(int i = 0 ; i < n ;i++){
            sum += c[i];
        }

        if (is_sorted(a.begin(), a.end())) {
            cout<<0<<"\n";
            continue;
        }else{
           for(int i = 0 ; i< n ;i++){
            dp[i] = c[i];
            for(int j = 0 ; j < i;j++){
              if(a[j] <= a[i]){
                dp[i] = max(dp[i] , dp[j] + c[i]);
              }
           }
        }
           cout<<sum - *max_element(all(dp))<<"\n";
        }


        
    }
    return 0;
}
