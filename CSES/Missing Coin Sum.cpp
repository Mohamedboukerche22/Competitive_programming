//https://cses.fi/problemset/task/2183/
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
 int t = 1;
  while (t--) {
    ll n;
    cin >>n;
    vector<ll>v(n);
    for(int i = 0 ; i< n ;i++){
        cin >>v[i];
    }
    // sorting array 
    // 2 9 1 2 7
    sort(all(v));
    ll cnt = 0;
    //1 2 2 7 9   
    for(int i = 0 ; i< n ;i++){
        if(v[i] > cnt  + 1){
            cout << cnt + 1<<"\n";
            return 0;
        }
        cnt += v[i];
    }
    cout <<cnt  + 1<<"\n";
  }
  return 0;
}
