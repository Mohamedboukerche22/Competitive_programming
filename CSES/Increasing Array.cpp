//https://cses.fi/problemset/task/1094/
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
int main() {
    fastAOI;
    int t = 1;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll>a(n);
        for(ll i = 0 ; i<  n;i++){
          cin >>a[i];
        }
        ll sum = 0;
        int prev = a[0];
        for(ll i = 1 ; i < n;i++){
            if(prev > a[i]){
              sum += (prev - a[i]);
            }else{
                prev = a[i];
            }
        }
        cout <<sum;
        
    
    }
    return 0;
}
