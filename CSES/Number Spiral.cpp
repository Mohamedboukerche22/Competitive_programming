//https://cses.fi/problemset/task/1071/
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
int main() {
    fastAOI;
    int t ;
    cin >> t;
    while (t--) {
      ll x,y;
      cin >> x >>y;
      swap(x,y);
      ll layer = max(x,y);
      ll ans = 0;
      if(x == layer){
          if(layer%2==0){
            ans = (layer -1) * (layer -1) +y;
          }else{
            ans = layer*layer -(y-1);
          }
          
      }
      else
        if(layer%2==0)ans = (layer*layer - (x-1));
        else ans = (layer-1)*(layer-1) + x;

     cout << ans << '\n';   
    }
    return 0;
}
