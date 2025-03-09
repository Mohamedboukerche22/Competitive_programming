#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ll n, k;
    cin >> n >> k;
    ll odd = (n + 1) / 2;

    if (k <= odd) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - odd) << endl;
    }
    return 0;
}
