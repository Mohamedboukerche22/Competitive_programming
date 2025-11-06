// only 60 out 100 point
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int main() {
    fastAOI;
    ll t = 1;
    // cin >> t;
    while (t--) {
    ll N, M;cin >> N >> M;
    vector<ll> S(M);
    for (ll i = 0; i < M; i++) cin >> S[i];
    int K;
    cin >> K;
    vector<vector<int>> P(K), C(K);
    vector<int> L(K), R(K);
    
    for (int i = 0; i < K; i++) {
        cin >> L[i] >> R[i];
        P[i].resize(L[i]);
        C[i].resize(R[i]);
        for (int j = 0; j < L[i]; j++) cin >> P[i][j];
        for (int j = 0; j < R[i]; j++) cin >> C[i][j];
    }
    
    vector<bool> hs(N + 1, false);
    for (int x : S) hs[x] = true;
    
    vector<bool> used(K, false);
    queue<int> q;
    for (int i : S) q.push(i);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < K; i++) {
            if (used[i]) continue;
            bool found = false;
            for (int p : P[i]) {
                if (p == u) {
                    found = true;
                    break;
                }
            }
            if (!found) continue;
            bool able = true;
            for (int p : P[i]) {
                if (!hs[p])able = false;break;

            }   
            if (able) {
                used[i] = true;
                for (int c : C[i]) {
                    if (!hs[c]) {
                        hs[c] = true;q.push(c);
                    }
                }
            }
        }
    }
    
    vector<ll> ans;

    for (int i=1;i<=N;i++) {
        if (hs[i]){
            ans.pb(i);
        } 
    }
    
    cout << ans.size() << "\n";
    for (ll i = 0; i < sz(ans); i++) {
        if (i > 0) cout << " ";
        cout << ans[i];
    }
     cout << "\n";
    }
    return 0;
}
