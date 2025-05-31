#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> lol(n);
        for (int i = 0; i < n; i++) {
            cin >> lol[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 4; j++) {
                if (lol[i][j] == '#') {
                    cout << (j + 1) << " ";
                    break; 
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
