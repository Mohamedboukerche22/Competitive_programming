// https://codeforces.com/contest/1606/problem/B
// return from bac 
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 2e5 +1;
 
 
int main(){
 fastAOI;
 int t ;
 cin >>t;
  while (t--) {
      ll n,k;
      cin >>n>>k;
      if(n == 1){
        cout <<0<<"\n";
        continue; 
      }
      ll cur = 1;
      ll hours =  0;

      while(cur < n && cur < k){
        
        cur *= 2;
        
        hours++;

      }
      if(cur < n){
        ll r = n - cur ;
        hours += (r + k - 1) / k;
      }
      cout <<hours<<"\n";
 
 
 
  }
  return 0;
 }
