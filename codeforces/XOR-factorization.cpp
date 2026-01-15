//https://codeforces.com/contest/2180/problem/C
#include <bits/stdc++.h>
using namespace std;
#define fastAOI                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 2e5 + 1;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(k, 0);
  int ss = 0;

  if (k & 1) {
    for (int i = 0; i < k; i++) {
      a[i] = n;
    }

  } else {
    for (int i = 30; i >= 0; i--) {
      if ((n >> i) & 1) {
        for (int j = 0; j < k; j++) {
          if (j != min(k - 1, ss)) {
            a[j] += (1 << i);
          }
        }
        if (ss < k) {
          ss++;
        }
      } else {
        for (int j = 0; j < ss / 2 * 2; j++)
          a[j] += (1 << i);
      }
    }
  }
  for (int i = 0; i < k; i++) {
    cout << a[i] << (i + 1 == k ? '\n' : ' ');
  }
}

int main() {
  fastAOI;

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
