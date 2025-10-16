//https://cses.fi/problemset/task/1637/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> dp(n + 1, 1e9); 
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        int TMP = i;

        while (TMP > 0){
            int D = TMP % 10;
            if (D > 0) {
                dp[i] = min(dp[i], dp[i - D] + 1);
            }
            TMP /= 10;
        }
    }

    cout << dp[n];
    return 0;
}
