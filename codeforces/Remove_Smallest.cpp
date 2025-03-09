#include<bits/stdc++.h>
using namespace std;
bool c(vector<int>& lol) {
    sort(lol.begin(), lol.end());
    for (size_t i = 1; i < lol.size(); ++i) {
        if (abs(lol[i] - lol[i-1]) > 1) {
            return false;
        }
    } return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
    int n;cin >> n;
        vector<int> lol(n);
        for (int i = 0; i < n; ++i) {
            cin >> lol[i]; }
        if (c(lol)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
