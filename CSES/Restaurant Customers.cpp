//https://cses.fi/problemset/task/1619/
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
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>>arr(n);
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            arr.pb({a, +1}); 
            arr.pb({b, -1}); 
        }
        sort(all(arr));
        int cnt = 0, mc = 0;
        for (auto &p : arr) {
            cnt += p.second;
            mc = max(mc, cnt);
        }

        cout << mc << "\n";
    }
    return 0;
}
