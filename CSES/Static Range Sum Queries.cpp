//https://cses.fi/problemset/task/1646/
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 2e5 +1;
void solve(){
  int n , q;
  cin >> n >> q;
  vector<int>arr(n+2);
  for(int i = 0 ; i< n ;i++){
    cin >> arr[i];
  }
  vector<ll>pref(n+2);
  pref[0] = 0;
  for(int i = 0 ; i< n ;i++){
    pref[i+1] = pref[i] + arr[i];
  }
  while (q--)
  {
    int a , b;
    cin >> a >> b;
    cout <<pref[b] - pref[a-1]<<"\n";
  }
  
}
 
int main() {
    fastAOI;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
