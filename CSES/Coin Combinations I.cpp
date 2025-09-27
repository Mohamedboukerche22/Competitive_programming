//https://cses.fi/problemset/task/1635/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N =1e6;
const int MOD = 1e9 +7;

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int n,T;
       cin >>n>>T;
       vector<int>coin(n);
       for(int &i:coin) cin >> i;
       vector<ll>count(N);
       count[0] = 1;
       for(int x = 1;x<=T;x++){
        for(int c : coin){
         if(x-c >=0){
          count[x] += count[x-c]; 
          count[x] %=MOD;
          }    
        }
       }
       cout <<count[T];
    }
    return 0;
}
