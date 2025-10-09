//https://cses.fi/problemset/task/1660/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int main() {
    fastAOI;
    int t =1;
     //cin >> t;
    while (t--) {
        int n , x;
        cin >> n >>x;
        vector<int>arr(n);
        for(int i = 0 ; i< n ;i++){
            cin >> arr[i];
        }
        ll sum = 0;
        ll l = 0;
        ll count = 0;

        for(int r = 0 ; r<n;r++){
            sum += arr[r];
            while(sum > x){
                sum -= arr[l];
                l++;
            }
            if (sum == x) count++; 
        }
        cout<<count;
    }
    return 0;
}
